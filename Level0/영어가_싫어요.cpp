/*
Title   : 영어가 싫어요
Author  : Hoseok Lee
Date    : 2023/01/01
https://school.programmers.co.kr/learn/courses/30/lessons/120894
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    string answer = "";
    
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers.substr(i, 4) == "zero") {
            answer += "0";
            i += 3;
        }
        else if (numbers.substr(i, 3) == "one") {
            answer += "1";
            i += 2;
        }
        else if (numbers.substr(i, 3) == "two") {
            answer += "2";
            i += 2;
        }
        else if (numbers.substr(i, 5) == "three") {
            answer += "3";
            i += 4;
        }
        else if (numbers.substr(i, 4) == "four") {
            answer += "4";
            i += 3;
        }
        else if (numbers.substr(i, 4) == "five") {
            answer += "5";
            i += 3;
        }
        else if (numbers.substr(i, 3) == "six") {
            answer += "6";
            i += 2;
        }
        else if (numbers.substr(i, 5) == "seven") {
            answer += "7";
            i += 4;
        }
        else if (numbers.substr(i, 5) == "eight") {
            answer += "8";
            i += 4;
        }
        else if (numbers.substr(i, 4) == "nine") {
            answer += "9";
            i += 3;
        }
    }
    
    return stoll(answer);
}