/*
Title   : 세균 증식
Author  : Hoseok Lee
Date    : 2022/11/25
https://school.programmers.co.kr/learn/courses/30/lessons/120910
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    for (int i = 0; i < t; i++) 
        n *= 2;
    return n;
}