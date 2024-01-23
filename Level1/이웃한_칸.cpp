/*
Title   : 이웃한 칸
Author  : Hoseok Lee
Date    : 2024/01/23
https://school.programmers.co.kr/learn/courses/30/lessons/250125
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string color = board[h][w];
    
    for (int i = 0; i < 4; i++) {
        int r = h + dr[i];
        int c = w + dc[i];
        
        if (r < 0 || r >= board.size() || c < 0 || c >= board[i].size())
            continue;
        if (board[r][c] == color)
            answer++;
    }
    return answer;
}