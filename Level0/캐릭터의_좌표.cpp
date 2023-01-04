/*
Title   : 캐릭터의 좌표
Author  : Hoseok Lee
Date    : 2023/01/04
https://school.programmers.co.kr/learn/courses/30/lessons/120861
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    int x = 0, y = 0;
    
    for (auto it : keyinput) {
        if (it == "left")
            x--;
        if (it == "right")
            x++;
        if (it == "up")
            y++;
        if (it == "down")
            y--;
        
        if (x < -board[0] / 2)
            x = -board[0] / 2;
        if (x > board[0] / 2)
            x = board[0] / 2;
        if (y < -board[1] / 2)
            y = -board[1] / 2;
        if (y > board[1] / 2)
            y = board[1] / 2;
    }
    return {x, y};
}