/*
Title   : 컨트롤 제트
Author  : Hoseok Lee
Date    : 2023/01/01
https://school.programmers.co.kr/learn/courses/30/lessons/120853
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0, before = 0;
    string str;
    stringstream ss(s);
    
    while (ss >> str) {
        if (str == "Z") 
            answer -= before;
        else {
            answer += stoi(str);
            before = stoi(str);
        }
    }
    return answer;
}