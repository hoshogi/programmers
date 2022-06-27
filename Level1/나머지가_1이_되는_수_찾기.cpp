/*
Title   : 나머지가 1이 되는 수 찾기
Author  : Hoseok Lee
Date    : 2022/06/28
https://programmers.co.kr/learn/courses/30/lessons/87389
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    for (int i = 1; i < n; i++)
        if (n % i == 1)
            return i;
}
