/*
Title   : 가장 큰 정사각형 찾기
Author  : Hoseok Lee
Date    : 2023/01/31
https://school.programmers.co.kr/learn/courses/30/lessons/12905
https://github.com/hoshogi
*/

#include <iostream>
#include<vector>
using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    for (int i = 0; i < board.size(); i++) 
        answer = max(answer, board[i][0]);
    for (int j = 0; j < board[0].size(); j++) 
        answer = max(answer, board[0][j]);
    for (int i = 1; i < board.size(); i++) {
        for (int j = 1; j < board[i].size(); j++) {
            if (board[i][j] == 1) {
                board[i][j] = min(board[i - 1][j - 1], board[i - 1][j]);
                board[i][j] = min(board[i][j], board[i][j - 1]) + 1;
                answer = max(answer, board[i][j]);
            }
        }
    }
    return answer * answer;
}