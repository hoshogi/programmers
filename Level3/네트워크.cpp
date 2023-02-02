/*
Title   : 네트워크
Author  : Hoseok Lee
Date    : 2023/02/02
https://school.programmers.co.kr/learn/courses/30/lessons/43162
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
using namespace std;

bool visited[200];

void bfs(int v, vector<vector<int>> computers) {
    queue<int> q;
    visited[v] = true;
    q.push(v);
    
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        
        for (int i = 0; i < computers[now].size(); i++) {
            if (computers[now][i] && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for (int i = 0; i < computers.size(); i++) {
        if (!visited[i]) {
            bfs(i, computers);
            answer++;
        }
    }
    return answer;
}