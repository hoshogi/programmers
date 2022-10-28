/*
Title   : 양꼬치
Author  : Hoseok Lee
Date    : 2022/10/28
https://school.programmers.co.kr/learn/courses/30/lessons/120830
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    return 12000 * n + max(k - n / 10, 0) * 2000;
}