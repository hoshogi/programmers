/*
Title   : 최빈값 구하기
Author  : Hoseok Lee
Date    : 2022/10/31
https://school.programmers.co.kr/learn/courses/30/lessons/120812
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int count[1001] = {0, };
    int answer = 0;
    priority_queue<pair<int,int>> pq;
    
    for (auto it : array)
        count[it]++;
    for (int i = 0; i <= 1000; i++) {
        if (count[i] > 0) 
            pq.push({count[i], i});
    }
    
    int maxCount = pq.top().first;
    answer = pq.top().second;
    pq.pop();
    if (!pq.empty() && pq.top().first == maxCount)
        answer = -1;
    return answer;
}