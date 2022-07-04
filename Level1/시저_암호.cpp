/*
Title   : 시저 암호
Author  : Hoseok Lee
Date    : 2022/07/04
https://programmers.co.kr/learn/courses/30/lessons/12926
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] + n;
            if (index > 'z')
                index = 'a' + index - 'z' - 1;
            s[i] = char(index);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += n;
            if (s[i] > 'Z')
                s[i] = 'A' + s[i] - 'Z' - 1;
      
        }
    }
    
    return s;
}
