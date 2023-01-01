/*
Title   : 모스부호 (1)
Author  : Hoseok Lee
Date    : 2023/01/01
https://school.programmers.co.kr/learn/courses/30/lessons/120838
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    string mos[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    map<string, char> mosToAlpha;
    
    for (int i = 0; i < 26; i++) 
        mosToAlpha[mos[i]] = 'a' + i;
    
    string str;
    stringstream ss(letter);
    while (ss >> str) 
        answer += mosToAlpha[str];
    return answer;
}