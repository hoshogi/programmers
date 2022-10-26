/*
Title   : 짝수의 합
Author  : Hoseok Lee
Date    : 2022/10/26
https://school.programmers.co.kr/learn/courses/30/lessons/120831
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    return (n / 2) * (n / 2 + 1);
}