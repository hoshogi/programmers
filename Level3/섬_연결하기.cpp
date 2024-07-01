/*
Title   : 섬 연결하기
Author  : Hoseok Lee
Date    : 2024/07/01

https://school.programmers.co.kr/learn/courses/30/lessons/42861
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int parent[100] = {0, };

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    
    if (a < b) {
        parent[b] = a;
        return;
    }
    parent[a] = b;
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    
    for (int i = 0; i < 100; i++) {
        parent[i] = i;
    }
    for (auto it : costs) {
        pq.push({it[2], it[0], it[1]});
    }
    for (int i = 0; i < costs.size(); i++) {
        int cost = get<0>(pq.top());
        int a = get<1>(pq.top());
        int b = get<2>(pq.top());
        pq.pop();
        
        if (find(a) != find(b)) {
            answer += cost;
            merge(a, b);
        }
    }
    return answer;
}
