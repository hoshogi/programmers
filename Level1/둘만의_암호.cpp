/*
Title   : 둘만의 암호
Author  : Hoseok Lee
Date    : 2023/02/03
https://school.programmers.co.kr/learn/courses/30/lessons/155652
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    bool alphabet[26] = {false, };
    
    for (auto it : skip) 
        alphabet[it - 'a'] = true;
    for (auto it : s) {
        int count = 0;
        char now = it;
        while (count < index) {
            now++;
            if (now == 'z' + 1)
                now = 'a';
            if (alphabet[now - 'a'])
                continue;
            count++;
        }
        answer += now;
    }
    return answer;
}