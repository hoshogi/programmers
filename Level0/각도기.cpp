/*
Title   : 각도기
Author  : Hoseok Lee
Date    : 2022/10/23
https://school.programmers.co.kr/learn/courses/30/lessons/120829
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    if (angle < 90)
        return 1;
    if (angle == 90)
        return 2;
    if (angle < 180)
        return 3;
    return 4;
}