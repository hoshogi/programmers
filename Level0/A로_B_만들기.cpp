/*
Title   : A로 B 만들기
Author  : Hoseok Lee
Date    : 2022/12/15
https://school.programmers.co.kr/learn/courses/30/lessons/120886
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int alphabetBefore[26] = {0, };
    int alphabetAfter[26] = {0, };
    
    for (int i = 0; i < before.length(); i++) {
        alphabetBefore[before[i] - 'a']++;
        alphabetAfter[after[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (alphabetBefore[i] != alphabetAfter[i])
            return 0;
    }
    return 1;
}