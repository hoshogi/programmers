/*
Title   : 문자열안에 문자열
Author  : Hoseok Lee
Date    : 2022/11/22
https://school.programmers.co.kr/learn/courses/30/lessons/120908
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    for (int i = 0; i < str1.length(); i++) {
        if (str1.substr(i, str2.length()) == str2)
            return 1;
    }
    return 2;
}