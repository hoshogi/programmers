/*
Title   : 문자열 계산하기
Author  : Hoseok Lee
Date    : 2022/12/17
https://school.programmers.co.kr/learn/courses/30/lessons/120902
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string str;
    bool plus = true;
    
    stringstream ss(my_string);
    while (ss >> str) {
        if (str == "+")
            plus = true;
        else if (str == "-")
            plus = false;
        else {
            if (plus) 
                answer += stoi(str); 
            else
                answer -= stoi(str);
        }
    }
    return answer;
}