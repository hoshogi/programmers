/*
Title   : 전화번호 목록
Author  : Hoseok Lee
Date    : 2022/07/14
https://school.programmers.co.kr/learn/courses/30/lessons/42577
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

bool solution(vector<string> phone_book) {
    map<string, int> m;
    
    for (auto it : phone_book) {
        for (int i = 0; i < it.length(); i++) {
            string str = it.substr(0, i + 1);
            if (m.find(str) == m.end()) {
                m[str] = 1;
            }
            else
                m[str]++;
        }
    }
    
    for (auto it : phone_book) {
        if (m[it] > 1)
            return false;
    }
    return true;
}
