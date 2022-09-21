/*
Title   : 게임 맵 최단거리
Author  : Hoseok Lee
Date    : 2022/09/21
https://school.programmers.co.kr/learn/courses/30/lessons/1844
https://github.com/hoshogi
*/

#include <vector>
#include <queue>
#include <algorithm>
#define INF 1e9

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int bfs(vector<vector<int> > maps) {
    int graph[100][100];
    int targetY = maps.size() - 1;
    int targetX = maps[0].size() - 1;
    queue<tuple<int, int, int>> q;
    
    for (int i = 0; i < maps.size(); i++)
        for (int j = 0; j < maps[0].size(); j++)
            graph[i][j] = INF;
    
    graph[0][0] = 0;
    q.push({0, 0, 1});
    
    while(!q.empty()) {
        int y = get<0>(q.front());
        int x = get<1>(q.front());
        int count = get<2>(q.front()) + 1;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempY = y + dy[i];
            int tempX = x + dx[i];
            
            if (!(tempY >= 0 && tempY <= targetY && tempX >= 0 && tempX <= targetX))
                continue;
            
            if (maps[tempY][tempX] == 1 && count < graph[tempY][tempX]) {
                graph[tempY][tempX] = count;
                q.push({tempY, tempX, count});
            }
        }
    }
    if (graph[targetY][targetX] == INF)
        return -1;
    return graph[targetY][targetX];
}

int solution(vector<vector<int> > maps)
{
    return bfs(maps);
}
