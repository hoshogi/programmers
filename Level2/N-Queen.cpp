/*
Title   : N-Queen
Author  : Hoseok Lee
Date    : 2023/03/27
https://school.programmers.co.kr/learn/courses/30/lessons/12952
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int answer, len;
bool board[12][12];

bool isPossible(int r, int c) {
    for (int i = 0; i < len; i++) {
        if (i == r)
            continue;
        if (board[i][c])
            return false;
    }
    for (int i = 0; i < len; i++) {
        if (i == c)
            continue;
        if (board[r][i])
            return false;
    }
    for (int i = -len; i < len; i++) {
        if (i == 0)
            continue;
        if (i + r < 0 || i + r >= len)
            continue;
        if (!(i + c < 0 || i + c >= len) && board[i + r][i + c])
            return false;
        if (!(c - i < 0 || c - i >= len) && board[i + r][c - i])
            return false;        
    }
    return true;
}

void dfs(int r) {
    for (int i = 0; i < len; i++) {
        if (isPossible(r , i)) {
            if (r == len - 1) {
                answer++;
                continue;
            }    
            board[r][i] = true;
            dfs(r + 1);
            board[r][i] = false;
        }
    }
}

int solution(int n) {
    len = n;
    dfs(0);
    return answer;
}