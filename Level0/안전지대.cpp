/*
Title   : 안전지대
Author  : Hoseok Lee
Date    : 2022/10/31
https://school.programmers.co.kr/learn/courses/30/lessons/120866
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int dr[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dc[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void checkNotSafe(int r, int c, int n, bool isNotSafe[100][100]) {
    isNotSafe[r][c] = true;
    for (int i = 0; i < 8; i++) {
        int row = r + dr[i];
        int col = c + dc[i];
        
        if (row < 0 || row >= n || col < 0 || col >= n)
            continue;
        isNotSafe[row][col] = true;
    }
}

int solution(vector<vector<int>> board) {
    bool isNotSafe[100][100] = {false, };
    int n = board.size();
    int answer = 0;
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            if (board[i][j] == 1) 
               checkNotSafe(i, j, n, isNotSafe); 
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            if (!isNotSafe[i][j])
                answer++;

    return answer;
}