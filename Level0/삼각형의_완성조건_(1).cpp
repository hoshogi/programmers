/*
Title   : 삼각형의 완성조건 (1)
Author  : Hoseok Lee
Date    : 2022/11/15
https://school.programmers.co.kr/learn/courses/30/lessons/120889
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end());
    if (sides[0] + sides[1] > sides[2])
        return 1;
    return 2;
}