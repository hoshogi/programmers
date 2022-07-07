/*
Title   : 더 맵게
Author  : Hoseok Lee
Date    : 2022/07/07
https://school.programmers.co.kr/learn/courses/30/lessons/42626
https://github.com/hoshogi
*/


#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<long long, vector<long long>, greater<long long> > pq;
    
    for (auto it : scoville)
        pq.push(it);
    
    while (pq.top() < K) {
        if (pq.size() < 2)
            return -1;
        
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        
        pq.push(a + 2 * b);
        answer++;
    }
    
    return answer;
}
