/*
Title   : 가장 먼 노드
Author  : Hoseok Lee
Date    : 2022/11/02
https://school.programmers.co.kr/learn/courses/30/lessons/49189
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#define MAX 20000
#define INF 1e9

using namespace std;

vector<int> graph[MAX + 1];

int bfs(int distance[]) {
    int maxDist = 0;
    queue<pair<int, int>> q;
    q.push({1, 0});
    distance[1] = 0;
    
    while (!q.empty()) {
        int now = q.front().first;
        int dist = q.front().second + 1;
        q.pop();
        
        for (int i = 0; i < graph[now].size(); i++) {
            int temp = graph[now][i];
            if (dist >= distance[temp])
                continue;
            distance[temp] = dist;
            maxDist = max(maxDist, dist);
            q.push({temp, dist});
        }
    }
    return maxDist;
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    int distance[MAX + 1];
    
    for (auto it : edge) {
        graph[it[0]].push_back(it[1]);
        graph[it[1]].push_back(it[0]);
    }
    fill_n(distance, n + 1, INF);
    int maxDist = bfs(distance);
    for (int i = 1; i <= n; i++) {
        if (maxDist == distance[i]) 
            answer++;
    }
    return answer;
}