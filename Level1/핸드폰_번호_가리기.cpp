/*
Title   : 핸드폰 번호 가리기
Author  : Hoseok Lee
Date    : 2022/05/10
https://programmers.co.kr/learn/courses/30/lessons/12948
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for (int i = 0; i < phone_number.length() - 4; i++)
        answer += "*";
    for (int i = phone_number.length() - 4; i < phone_number.length(); i++)
        answer += phone_number[i];
    return answer;
}
