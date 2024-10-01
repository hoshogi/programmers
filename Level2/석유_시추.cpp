/*
Title   : 석유 시추
Author  : Hoseok Lee
Date    : 2024/10/01

https://school.programmers.co.kr/learn/courses/30/lessons/250136
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int landIndex = 0;
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int colCount[500] = {0, };

void bfs(int r, int c, vector<vector<int>>& land) {
    queue<pair<int, int>> q;
    landIndex--;
    
    land[r][c] = landIndex;
    int count = 1;
    int minCol = c;
    int maxCol = c;
    q.push({r, c});
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = row + dr[i];
            int tempC = col + dc[i];
            
            if (tempR < 0 || tempR >= land.size() || tempC < 0 || tempC >= land[0].size() || land[tempR][tempC] <= 0) {
                continue;
            }
            land[tempR][tempC] = landIndex;
            minCol = min(minCol, tempC);
            maxCol = max(maxCol, tempC);
            count++;
            q.push({tempR, tempC});
        }
    }
    for (int i = minCol; i <= maxCol; i++) {
        colCount[i] += count;
    }
}

int solution(vector<vector<int>> land) {
    int answer = 0;
    
    for (int i = 0; i < land.size(); i++) {
        for (int j = 0; j < land[i].size(); j++) {
            if (land[i][j] == 1) {
                bfs(i, j, land);
            }
        }
    }
    for (int i = 0; i < land[0].size(); i++) {
        answer = max(answer, colCount[i]);
    }
    return answer;
}
