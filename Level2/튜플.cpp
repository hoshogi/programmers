/*
Title   : 튜플
Author  : Hoseok Lee
Date    : 2022/08/25
https://school.programmers.co.kr/learn/courses/30/lessons/64065
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<pair<int, int>> v;
    map<int, int> m;
    
    string str = "";
    for (int i = 0;i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            str += s[i];
        else {
            if (str != "") {
                int num = stoi(str);
                if (m.find(num) == m.end())
                    m[num] = 1;
                else
                    m[num]++;
                str = "";
            }
        }
    }
    
    for (auto it : m)
        v.push_back({it.second, it.first});
    sort(v.begin(), v.end(), greater<>());
    
    for (auto it : v)
        answer.push_back(it.second);
    
    return answer;
}
