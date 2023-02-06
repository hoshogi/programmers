/*
Title   : 야근 지수
Author  : Hoseok Lee
Date    : 2023/02/06
https://school.programmers.co.kr/learn/courses/30/lessons/12927
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> pq;
    
    for (auto it : works) 
        pq.push(it);
    for (int i = 0; i < n; i++) {
        if (pq.empty())
            break;
        int num = pq.top() - 1;
        pq.pop();
        if (num != 0)
            pq.push(num);
    }
    
    while (!pq.empty()) {
        answer += pq.top() * pq.top();
        pq.pop();
    }
    return answer;
}