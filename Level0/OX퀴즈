/*
Title   : OX퀴즈
Author  : Hoseok Lee
Date    : 2022/11/02
https://school.programmers.co.kr/learn/courses/30/lessons/120907
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <sstream>
 
using namespace std;

bool calculate(int operator1, int operator2, int result, string oper) {
    if (oper == "+") {
        if (operator1 + operator2 == result)
            return true;
        return false;
    }
    if (operator1 - operator2 == result)
        return true;
    return false;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (auto it : quiz) {
        string operand1, oper, operand2, equal, result;
        
        stringstream ss(it);
        ss >> operand1 >> oper >> operand2 >> equal >> result;
        if (calculate(stoi(operand1), stoi(operand2), stoi(result), oper))
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    return answer;
}