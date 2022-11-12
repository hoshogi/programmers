/*
Title   : 특정 문자 제거하기
Author  : Hoseok Lee
Date    : 2022/11/12
https://school.programmers.co.kr/learn/courses/30/lessons/120826
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    for (int i = 0; i < my_string.length(); i++) 
        if (my_string.substr(i, 1) != letter)
            answer += my_string[i];
    return answer;
}