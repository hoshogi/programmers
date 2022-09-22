/*
Title   : 삼각 달팽이
Author  : Hoseok Lee
Date    : 2022/09/22
https://school.programmers.co.kr/learn/courses/30/lessons/68645
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int loop = 0;
    int x = 0, y = 0;
    int board[1000][1000] = {0, };
    bool down = true, next = false, up = false;
    
    for (int i = 0; i < n * (n + 1) / 2; i++) {
        board[y][x] = i + 1;
        
        if (down) {
            if (y == n - loop - 1) {
                down = false;
                next = true;
                x++;
            }
            else
                y++;
        }
        else if (next) {
            if (x == n - 2 * loop - 1) {
                next = false;
                up = true;
                x--;
                y--;
            }
            else
                x++;
        }
        else if (up) {
            if (y == 2 * loop + 1) {
                up = false;
                down = true;
                y++;
                loop++;
            }
            else {
                x--;
                y--;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            answer.push_back(board[i][j]);
    
    return answer;
}
