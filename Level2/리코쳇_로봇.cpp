/*
Title   : 리코쳇 로봇
Author  : Hoseok Lee
Date    : 2023/09/06
https://school.programmers.co.kr/learn/courses/30/lessons/169199
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1e9

using namespace std;

int startR, startC, goalR, goalC;
int minCount[100][100];

vector<pair<int, int>> calculateEndPoint(int r, int c, vector<string> board) {
    vector<pair<int, int>> endPoint;
    
    for (int i = r; i >= 0; i--) {
        if (i == 0) {
            endPoint.push_back({i, c});
            break;
        }
        if (board[i - 1][c] == 'D') {
            endPoint.push_back({i, c});
            break;
        }
    }
    
    for (int i = r; i < board.size(); i++) {
        if (i == board.size() - 1) {
            endPoint.push_back({i, c});
            break;
        }
        if (board[i + 1][c] == 'D') {
            endPoint.push_back({i, c});
            break;
        }
    }
    
    for (int i = c; i >= 0; i--) {
        if (i == 0) {
            endPoint.push_back({r, i});
            break;
        }
        if (board[r][i - 1] == 'D') {
            endPoint.push_back({r, i});
            break;
        }
    }
    
    for (int i = c; i < board[r].length(); i++) {
        if (i == board[r].length() - 1) {
            endPoint.push_back({r, i});
            break;
        }
        if (board[r][i + 1] == 'D') {
            endPoint.push_back({r, i});
            break;
        }
    }
    return endPoint;
}

void bfs(vector<string> board) {
    queue<pair<pair<int, int>, int>> q;
    minCount[startR][startC] = 0;
    q.push({{startR, startC}, minCount[startR][startC]});
    
    while (!q.empty()) {
        int nowR = q.front().first.first;
        int nowC = q.front().first.second;
        int count = q.front().second + 1;
        q.pop();
        
        vector<pair<int, int>> endPoint = calculateEndPoint(nowR, nowC, board);
        for (auto it : endPoint) {
            if (count < minCount[it.first][it.second]) {
                minCount[it.first][it.second] = count;
                q.push({{it.first, it.second}, minCount[it.first][it.second]});
            }
        }
    }
}

int solution(vector<string> board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].length(); j++) {
            if (board[i][j] == 'R') {
                startR = i;
                startC = j;
            } else if (board[i][j] == 'G') {
                goalR = i;
                goalC = j;
            }
        }
    }
    for (int i = 0; i < board.size(); i++) 
        fill_n(minCount[i], board[i].length(), MAX);
    bfs(board);
    if (minCount[goalR][goalC] == MAX) 
        return -1;
    return minCount[goalR][goalC];
}