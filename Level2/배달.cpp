/*
Title   : 배달
Author  : Hoseok Lee
Date    : 2024/03/21

https://school.programmers.co.kr/learn/courses/30/lessons/12978
https://github.com/hoshogi
*/

#include <vector>
#include <queue>
#include <algorithm>
#define MAX 50
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[MAX + 1];
int dist[MAX + 1];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({dist[start], start});
    
    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        for (auto it : graph[now]) {
            if (cost + it.second < dist[it.first]) {
                dist[it.first] = cost + it.second;
                pq.push({dist[it.first], it.first});
            }
        }
    }
}

int solution(int N, vector<vector<int>> road, int K) {
    int answer = 0;
    
    fill_n(dist, N + 1, INF);
    for (auto it : road) {
        graph[it[0]].push_back({it[1], it[2]});
        graph[it[1]].push_back({it[0], it[2]});
    }
   
    dijkstra(1);
    
    for (int i = 1; i <= N; i++) {
        if (dist[i] <= K)
            answer++;
    }
    return answer;
}