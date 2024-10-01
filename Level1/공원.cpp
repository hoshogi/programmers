/*
Title   : 공원
Author  : Hoseok Lee
Date    : 2024/10/01

https://school.programmers.co.kr/learn/courses/30/lessons/340198
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAX 50

using namespace std;

int dr[3] = {-1, -1, 0};
int dc[3] = {0, -1, -1};
int board[50][50] = {0, };

int solution(vector<int> mats, vector<vector<string>> park) {
    int maxLength = -1, answer = -1;
    
    for (int i = 0; i < park.size(); i++) {
        if (park[i][0] == "-1") {
            board[i][0] = 1;
            continue;
        }
        board[i][0] = 0;
    }
    
    for (int j = 0; j < park[0].size(); j++) {
        if (park[0][j] == "-1") {
            board[0][j] = 1;
            continue;
        }
        board[0][j] = 0;
    }
    
    sort(mats.begin(), mats.end());
    for (int i = 1; i < park.size(); i++) {
        for (int j = 1; j < park[i].size(); j++) {
            if (park[i][j] != "-1") {
                board[i][j] = 0;
                continue;
            }
            board[i][j] = 1;
            int now = MAX;
            
            for (int k = 0; k < 3; k++) {
                int row = i + dr[k];
                int col = j + dc[k];
                
                now = min(now, board[row][col]);
            }
            board[i][j] = now + 1;
            maxLength = max(maxLength, board[i][j]);
        }
    }
    
    for (auto it : mats) {
        if (it <= maxLength) {
            answer = it;
            continue;
        }
        return answer;
    }
}
