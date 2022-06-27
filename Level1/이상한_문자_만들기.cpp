/*
Title   : 이상한 문자 만들기
Author  : Hoseok Lee
Date    : 2022/06/28
https://programmers.co.kr/learn/courses/30/lessons/12930
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (count % 2 == 0)
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
            count++;
        }
        else
            count = 0;
    }
    return s;
}
