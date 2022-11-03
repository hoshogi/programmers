/*
Title   : 숫자 찾기
Author  : Hoseok Lee
Date    : 2022/11/03
https://school.programmers.co.kr/learn/courses/30/lessons/120904
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string str = to_string(num);
    for (int i = 0; i < str.length(); i++) 
        if (str[i] - '0' == k)
            return i + 1;
    return -1;
}