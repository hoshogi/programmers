/*
Title   : 외계어 사전
Author  : Hoseok Lee
Date    : 2023/01/01
https://school.programmers.co.kr/learn/courses/30/lessons/120869
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    sort(spell.begin(), spell.end());
    sort(dic.begin(), dic.end());
    
    do {
        string word = "";
        for (auto it : spell)
            word += it;
        if (binary_search(dic.begin(), dic.end(), word))
            return 1;
    } while (next_permutation(spell.begin(), spell.end()));
    return 2;
}