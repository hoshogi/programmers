/*
Title   : 완주하지 못한 선수
Author  : Hoseok Lee
Date    : 2022/07/04
https://programmers.co.kr/learn/courses/30/lessons/42576
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> m;
    
    for (auto it : participant) {
        if(m.find(it) == m.end())
            m[it] = 1;
        else
            m[it]++;
    }
    
    for (auto it : completion)
        m[it]--;
    
    for (auto it : m) {
        if (it.second > 0)
            return it.first;
    }
}
