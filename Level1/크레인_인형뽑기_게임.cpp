/*
Title   : 크레인 인형뽑기 게임
Author  : Hoseok Lee
Date    : 2022/04/15
https://programmers.co.kr/learn/courses/30/lessons/64061
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    
    for (auto it : moves) {
        for (int i = 0; i < board.size(); i++) {
            if (board[i][it - 1] != 0) {
                if (!s.empty()) {
                    if (board[i][it - 1] == s.top()) {
                        s.pop();
                        answer += 2;
                    }
                    else
                        s.push(board[i][it - 1]);
                    board[i][it - 1] = 0;
                    break;
                }
                else {
                    s.push(board[i][it - 1]);
                    board[i][it - 1] = 0;
                    break;
                }
            }
        }
    }
    return answer;
}
