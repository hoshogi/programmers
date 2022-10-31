/*
Title   : 한 번만 등장한 문자
Author  : Hoseok Lee
Date    : 2022/10/31
https://school.programmers.co.kr/learn/courses/30/lessons/120896
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int alphabet[26] = {0, };
    string answer = "";
    
    for (auto it : s) 
        alphabet[it - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 1)
            answer += 'a' + i;
    }
    return answer;
}