/*
Title   : 스킬트리
Author  : Hoseok Lee
Date    : 2023/01/19
https://school.programmers.co.kr/learn/courses/30/lessons/49993
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int alphabet[26];

bool check(string skill) {
    int index = 1;
    
    for (auto it : skill) {
        if (alphabet[it - 'A'] != 0) {
               if (alphabet[it - 'A'] == index)
                   index++;
                else
                    return false;
        }
    }
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for (int i = 0; i < skill.length(); i++) 
        alphabet[skill[i] - 'A'] = i + 1;
    
    for (auto it : skill_trees) {
        if (check(it))
            answer++;
    }
    return answer;
}