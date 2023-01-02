/*
Title   : 평행
Author  : Hoseok Lee
Date    : 2023/01/02
https://school.programmers.co.kr/learn/courses/30/lessons/120875
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

double findAngle(vector<int> dot1, vector<int> dot2) {
    return (double)(dot1[1] - dot2[1]) / (dot1[0] - dot2[0]);
}

int solution(vector<vector<int>> dots) {
    if (findAngle(dots[0], dots[1]) == findAngle(dots[2], dots[3]))
        return 1;
    if (findAngle(dots[0], dots[2]) == findAngle(dots[1], dots[3]))
        return 1;
    if (findAngle(dots[0], dots[3]) == findAngle(dots[1], dots[2]))
        return 1;
    return 0;
}