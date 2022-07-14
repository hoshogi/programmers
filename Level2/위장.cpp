/*
Title   : 위장
Author  : Hoseok Lee
Date    : 2022/07/14
https://school.programmers.co.kr/learn/courses/30/lessons/42578
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;
    vector<string> v;
    
    for (int i = 0; i < clothes.size(); i++) {
        m[clothes[i][1]]++;
        v.push_back(clothes[i][1]);
    }
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for (auto it : v)
        answer *= (m[it] + 1);
    
    return answer - 1;
}
