/*
Title   : 최댓값 만들기 (1)
Author  : Hoseok Lee
Date    : 2022/11/04
https://school.programmers.co.kr/learn/courses/30/lessons/120847
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), greater<>());
    return numbers[0] * numbers[1];
}