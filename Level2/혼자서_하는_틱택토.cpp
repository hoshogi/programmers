/*
Title   : 혼자서 하는 틱택토
Author  : Hoseok Lee
Date    : 2023/03/02
https://school.programmers.co.kr/learn/courses/30/lessons/160585
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> v = {
    {{0, 0}, {0, 1}, {0, 2}},
    {{1, 0}, {1, 1}, {1, 2}},
    {{2, 0}, {2, 1}, {2, 2}},
    {{0, 0}, {1, 0}, {2, 0}},
    {{0, 1}, {1, 1}, {2, 1}},
    {{0, 2}, {1, 2}, {2, 2}},
    {{0, 0}, {1, 1}, {2, 2}},
    {{0, 2}, {1, 1}, {2, 0}}
};

bool check(vector<string> board, char c) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (board[v[i][j].first][v[i][j].second] != c)
                break;
            if (j == v[i].size() - 1)
                return true;
        }
    }
    return false;
}

int solution(vector<string> board) {
    int countO = 0, countX = 0;
    bool canO = check(board, 'O');
    bool canX = check(board, 'X');
    
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].length(); j++) {
            if (board[i][j] == 'O')
                countO++;
            else if (board[i][j] == 'X')
                countX++;
        } 
    }
    if (countX > countO || countO - countX > 1)
        return 0;
    if (canO && canX)
        return 0;
    if (canO && countO - countX != 1) 
        return 0;
    if (canX && countO != countX) 
        return 0;
    return 1;
}