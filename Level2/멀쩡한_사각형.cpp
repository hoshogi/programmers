/*
Title   : 멀쩡한 사각형
Author  : Hoseok Lee
Date    : 2022/11/01
https://school.programmers.co.kr/learn/courses/30/lessons/62048
https://github.com/hoshogi
*/

#include <cmath>
#include <iostream>

using namespace std;

long long solution(int w,int h) {
    long long answer = 0;
    double prevHeight, nowHeight;
    
    for (int i = 0; i < w; i++) {
        prevHeight = (double)i * h / w;
        nowHeight = (double)(i + 1) * h / w;
        int count = ceil(nowHeight) - floor(prevHeight);
        answer += h - count;
    }
    return answer;
}