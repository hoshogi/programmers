/*
Title   : 미로 탈출
Author  : Hoseok Lee
Date    : 2023/03/08
https://school.programmers.co.kr/learn/courses/30/lessons/159993
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int minCount[100][100];

void bfs(vector<string> maps, int r, int c) {
    queue<tuple<int, int, int>> q;
    q.push({r, c, 0});
    minCount[r][c] = 0;
    
    while (!q.empty()) {
        int r = get<0>(q.front());
        int c = get<1>(q.front());
        int count = get<2>(q.front()) + 1;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = r + dr[i];
            int tempC = c + dc[i];
            
            if (tempR < 0 || tempR >= maps.size() || tempC < 0 || tempC >= maps[0].length())
                continue;
            char now = maps[tempR][tempC];
            if (now != 'X') {
                if (count < minCount[tempR][tempC]) {
                    minCount[tempR][tempC] = count;
                    q.push({tempR, tempC, count});
                }
            }
        }
    }
}

int solution(vector<string> maps) {
    int answer = 0;
    int startR, startC, midR, midC, endR, endC;
    
    for (int i = 0; i < 100; i++) 
        fill_n(minCount[i], 100, 1e9);
    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[i].length(); j++) {
            if (maps[i][j] == 'S') {
                startR = i;
                startC = j;
            }
            else if (maps[i][j] == 'L') {
                midR = i;
                midC = j;
            }
            else if (maps[i][j] == 'E') {
                endR = i;
                endC = j;
            }
        }
    }

    bfs(maps, startR, startC);
    if (minCount[endR][endC] == 1e9 || minCount[midR][midC] == 1e9)
        return -1;
    answer += minCount[midR][midC];
    for (int i = 0; i < 100; i++) 
        fill_n(minCount[i], 100, 1e9);
    bfs(maps, midR, midC);
    answer += minCount[endR][endC];
    return answer;
}