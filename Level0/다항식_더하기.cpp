/*
Title   : 다항식 더하기
Author  : Hoseok Lee
Date    : 2023/01/05
https://school.programmers.co.kr/learn/courses/30/lessons/120863
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    string str;
    int xNum = 0, num = 0;
    stringstream ss(polynomial);
    
    while (ss >> str) {
        if (str == "+")
            continue;
        if (str[str.length() - 1] == 'x') {
            if (str.length() == 1)
                xNum++;
            else 
                xNum += stoi(str.substr(0, str.length() - 1));
        }
        else 
            num += stoi(str);
    }
    
    if (xNum != 0) {
        if (xNum == 1)
            answer += "x";
        else
            answer += to_string(xNum) + "x";
    }
    
    if (num != 0) {
        if (xNum != 0)
            answer += " + ";
        answer += to_string(num);
    }
    return answer;
}