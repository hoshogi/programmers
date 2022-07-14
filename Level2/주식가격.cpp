/*
Title   : 주식가격
Author  : Hoseok Lee
Date    : 2022/07/14
https://school.programmers.co.kr/learn/courses/30/lessons/42584
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    stack<pair<int, int> > s;
    int result[100000] = {0, };
    
    for (int i = 0; i < prices.size(); i++) {
        if (s.empty())
            s.push({prices[i], i});
        else if (s.top().first <= prices[i])
            s.push({prices[i], i});
        else {
            while (!s.empty() && s.top().first > prices[i]) {
                result[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push({prices[i], i});
        }
    }
    
    while (!s.empty()) {
        result[s.top().second] = prices.size() - 1 - s.top().second;
        s.pop();
    }
    
    for (int i = 0; i < prices.size(); i++)
        answer.push_back(result[i]);
    
    return answer;
}
