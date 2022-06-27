/*
Title   : 나누어 떨어지는 숫자 배열
Author  : Hoseok Lee
Date    : 2022/06/28
https://programmers.co.kr/learn/courses/30/lessons/12910
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (auto it : arr)
        if (it % divisor == 0)
            answer.push_back(it);
    
    if (answer.size() == 0)
        answer.push_back(-1);
    else
        sort(answer.begin(), answer.end());
    
    return answer;
}
