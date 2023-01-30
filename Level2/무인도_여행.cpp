/*
Title   : 무인도 여행
Author  : Hoseok Lee
Date    : 2023/01/30
https://school.programmers.co.kr/learn/courses/30/lessons/154540
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
bool visited[100][100];

int bfs(int r, int c, vector<string> maps) {
    queue<pair<int, int>> q;
    int result = maps[r][c] - '0';
    q.push({r, c});
    visited[r][c] = true;
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = row + dr[i];
            int tempC = col + dc[i];
            
            if (tempR < 0 || tempR >= maps.size() || tempC < 0 || tempC >= maps[i].length())
                continue;
            if (visited[tempR][tempC] || maps[tempR][tempC] == 'X')
                continue;
            visited[tempR][tempC] = true;
            result += maps[tempR][tempC] - '0';
            q.push({tempR, tempC});
        }
    }
    return result;
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    
    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[i].length(); j++) {
            if (maps[i][j] != 'X' && !visited[i][j]) 
                answer.push_back(bfs(i, j, maps));
        }
    }
    
    if (answer.empty())
        return {-1};
    sort(answer.begin(), answer.end());
    return answer;
}