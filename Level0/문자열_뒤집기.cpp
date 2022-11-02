/*
Title   : 문자열 뒤집기
Author  : Hoseok Lee
Date    : 2022/11/02
https://school.programmers.co.kr/learn/courses/30/lessons/120822
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    reverse(my_string.begin(), my_string.end());
    return my_string;
}