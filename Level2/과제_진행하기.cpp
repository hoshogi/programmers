/*
Title   : 과제 진해앟기
Author  : Hoseok Lee
Date    : 2023/09/05
https://school.programmers.co.kr/learn/courses/30/lessons/176962
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int calculateTime(string time) {
    return stoi(time.substr(0, 2)) * 60 + stoi(time.substr(3));
}

bool compare(vector<string> prev, vector<string> next) {
    return prev[1] < next[1];
}

vector<string> solution(vector<vector<string>> plans) {
    vector<string> answer;
    stack<pair<int, string>> s;
    
    sort(plans.begin(), plans.end(), compare);
    for (int i = 1; i < plans.size(); i++) {
        int start = calculateTime(plans[i][1]);
        int prevStart = calculateTime(plans[i - 1][1]);
        int leftTime = start - prevStart;
        int prevTime = stoi(plans[i - 1][2]);
        
        if (leftTime >= prevTime) {
            leftTime -= prevTime;
            answer.push_back(plans[i - 1][0]);
            
            while (!s.empty() && leftTime > 0) {
                int time = s.top().first;
                string name = s.top().second;
                s.pop();
                
                if (leftTime >= time) {
                    leftTime -= time;
                    answer.push_back(name);
                } else {
                    s.push({time - leftTime, name});
                    leftTime = 0;
                }
            }
        } 
        else {
            s.push({prevTime - leftTime, plans[i - 1][0]});
        }
    }
    answer.push_back(plans[plans.size() - 1][0]);
    while (!s.empty()) {
        answer.push_back(s.top().second);
        s.pop();
    }
    return answer;
}