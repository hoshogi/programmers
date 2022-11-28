/*
Title   : 가위 바위 보
Author  : Hoseok Lee
Date    : 2022/11/28
https://school.programmers.co.kr/learn/courses/30/lessons/120839
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for (auto it : rsp) {
        if (it == '0')
            answer += "5";
        if (it == '2')
            answer += "0";
        if (it == '5')
            answer += "2";
    }
    return answer;
}