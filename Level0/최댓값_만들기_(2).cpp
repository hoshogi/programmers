/*
Title   : 최댓값 만들기 (2)
Author  : Hoseok Lee
Date    : 2022/12/06
https://school.programmers.co.kr/learn/courses/30/lessons/120862
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1e9;
    
    sort (numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; i++) 
        answer = max(answer, numbers[i] * numbers[i + 1]);
    return answer;
}