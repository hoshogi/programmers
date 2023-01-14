/*
Title   : 귤 고르기
Author  : Hoseok Lee
Date    : 2023/01/14
https://school.programmers.co.kr/learn/courses/30/lessons/138476
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> count;
    priority_queue<int> pq; 
    
    for (auto it : tangerine) 
        count[it]++;
    for (auto it : count) 
        pq.push(it.second);
    while (k > 0 && !pq.empty()) {
        k -= pq.top();
        pq.pop();
        answer++;
    }
    return answer;
}