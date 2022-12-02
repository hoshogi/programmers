/*
Title   : 암호 해독
Author  : Hoseok Lee
Date    : 2022/12/02
https://school.programmers.co.kr/learn/courses/30/lessons/120892
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    int count = 0;
    string answer = "";

    for (auto it : cipher) {
        count++;
        if (count == code) {
            answer += it;
            count = 0;
        }
    }
    return answer;
}