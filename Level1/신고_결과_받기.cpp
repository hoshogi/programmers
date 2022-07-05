/*
Title   : 신고 결과 받기
Author  : Hoseok Lee
Date    : 2022/07/05
https://school.programmers.co.kr/learn/courses/30/lessons/92334
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<string> reported_user;
    map<string, set<string> > user_report;
    map<string, int> reported_count;
    
    for (auto it : id_list)
        reported_count[it] = 0;
    
    for (auto it : report) {
        for (int i = 0; i < it.length(); i++) {
            if (it[i] == ' ') {
                string left = it.substr(0, i);
                string right = it.substr(i + 1);
                if (user_report[left].find(right) == user_report[left].end()) {
                    user_report[left].insert(right);
                    reported_count[right]++;
                }
            }
        }
    }
    
    for (auto it : reported_count) {
        if (it.second >= k)
            reported_user.push_back(it.first);
    }
    
    for (int i = 0; i < id_list.size(); i++) {
        int count = 0;
        for (auto it : reported_user) {
            if (user_report[id_list[i]].find(it) != user_report[id_list[i]].end())
                count++;
        }
        answer.push_back(count);
    }
    
    return answer;
}
