/*
Title   : 중앙값 구하기
Author  : Hoseok Lee
Date    : 2022/10/29
https://school.programmers.co.kr/learn/courses/30/lessons/120811
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    return array[array.size() / 2];
}