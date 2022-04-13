/*
Title   : 자릿수 더하기
Author  : Hoseok Lee
Date    : 2022/04/13
https://programmers.co.kr/learn/courses/30/lessons/12931
https://github.com/hoshogi
*/

#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string num = to_string(n);

    for (int i = 0; i < num.length(); i++)
        answer += num[i] - '0';
    return answer;
}
