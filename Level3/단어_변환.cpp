/*
Title   : 단어 변환
Author  : Hoseok Lee
Date    : 2023/03/20
https://school.programmers.co.kr/learn/courses/30/lessons/43163
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

int answer = 1e9;

bool check(string str1, string str2, map<string, int> m) {
    int count = 0;
    
    if (m.find(str2) != m.end())
        return false;
    
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i])
            count++;
    }
    
    if (count == 1)
        return true;
    return false;
}

void dfs(string prev, string target, vector<string> words, map<string, int>& m, int count) {
    for (auto it : words) {
        if (check(prev, it, m)) {
            if (it == target) {
                answer = min(answer, count + 1);
                return;
            }
            m[it]++;
            dfs(it, target, words, m, count + 1);
            m[it]--;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    for (auto it : words) {
        map<string, int> m;
        m[begin]++;
        if (check(begin, it, m)) {
            if (it == target) 
                return 1;
            m[it]++;
            dfs(it, target, words, m, 1);
        }
    }
    
    if (answer == 1e9)
        return 0;
    return answer;
}