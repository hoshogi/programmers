/*
Title   : 뒤에 있는 큰 수 찾기
Author  : Hoseok Lee
Date    : 2023/01/30
https://school.programmers.co.kr/learn/courses/30/lessons/154539
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    stack<pair<int, int>> s;
    
    answer.resize(numbers.size());
    for (int i = 0; i < numbers.size(); i++) {
        while (!s.empty() && s.top().second < numbers[i]) {
            answer[s.top().first] = numbers[i];
            s.pop();
        }
        s.push({i, numbers[i]});
    }
    
    while (!s.empty()) {
        answer[s.top().first] = -1;
        s.pop();
    }
    return answer;
}