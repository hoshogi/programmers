/*
Title   : 점의 위치 구하기
Author  : Hoseok Lee
Date    : 2022/11/18
https://school.programmers.co.kr/learn/courses/30/lessons/120841
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    if (dot[0] > 0 && dot[1] > 0)
        return 1;
    if (dot[0] < 0 && dot[1] > 0)
        return 2;
    if (dot[0] < 0 && dot[1] < 0)
        return 3;
    return 4;
}