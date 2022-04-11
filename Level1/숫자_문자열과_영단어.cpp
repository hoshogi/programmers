/*
Title   : 숫자 문자열과 영단어
Author  : Hoseok Lee
Date    : 2022/04/11
https://programmers.co.kr/learn/courses/30/lessons/81301
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            result += s[i];
        else {
            if (s[i] == 'z') {
                result += "0";
                i += 3;
            }
            else if (s[i] == 'o') {
                result += "1";
                i += 2;
            }
            else if (s[i] == 't' && s[i + 1] == 'w') {
                result += "2";
                i += 2;
            }
            else if (s[i] == 't' && s[i + 1] == 'h') {
                result += "3";
                i += 4;
            }
            else if (s[i] == 'f' && s[i + 1] == 'o') {
                result += "4";
                i += 3;
            }
            else if (s[i] == 'f' && s[i + 1] == 'i') {
                result += "5";
                i += 3;
            }
            else if (s[i] == 's' && s[i + 1] == 'i') {
                result += "6";
                i += 2;
            }
            else if (s[i] == 's' && s[i + 1] == 'e') {
                result += "7";
                i += 4;
            }
            else if (s[i] == 'e') {
                result += "8";
                i += 4;
            }
            else if (s[i] == 'n') {
                result += "9";
                i += 3;
            }
        }
    }
    answer = stoi(result);
    return answer;
}