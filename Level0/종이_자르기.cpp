/*
Title   : 종이 자르기
Author  : Hoseok Lee
Date    : 2023/01/01
https://school.programmers.co.kr/learn/courses/30/lessons/120922
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    return M - 1 + M * (N - 1);
}