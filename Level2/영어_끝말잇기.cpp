/*
Title   : 영어 끝말잇기
Author  : Hoseok Lee
Date    : 2022/07/22
https://school.programmers.co.kr/learn/courses/30/lessons/12981
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

set<string> s;
char c;

bool check(string word) {
    if (c != word.front())
        return false;
    if (word.size() <= 1)
        return false;
    if (s.find(word) != s.end())
        return false;
    else
        s.insert(word);
    return true;
}

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    int count = 0;
    c = words[0].front();
    
    while (true) {
        count++;
        for (int i = 0; i < n; i++) {
            if ((count - 1) * n + i == words.size()) {
                answer.push_back(0);
                answer.push_back(0);
                return answer;
            }
            
            string word = words[(count - 1) * n + i];
            if (!check(word)) {
                answer.push_back(i + 1);
                answer.push_back(count);
                return answer;
            }
            c = word.back();
        }
    }
}
