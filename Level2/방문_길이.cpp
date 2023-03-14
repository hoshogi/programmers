/*
Title   : 방문 길이
Author  : Hoseok Lee
Date    : 2023/03/14
https://school.programmers.co.kr/learn/courses/30/lessons/49994
https://github.com/hoshogi
*/

#include <string>
using namespace std;

int solution(string dirs) {
    int x = 0, y = 0, answer = 0;
    bool vertical[11][10] = {false, };
    bool horizontal[10][11] = {false, };
    
    for (auto it : dirs) {
        if (it == 'U') {
            if (y == 5)
                continue;
            if (!vertical[x + 5][y + 5]) {
                answer++;
                vertical[x + 5][y + 5] = true;
            }
            y++;
        }
        else if (it == 'D') {
            if (y == -5)
                continue;
            if (!vertical[x + 5][y + 4]) {
                answer++;
                vertical[x + 5][y + 4] = true;
            }
            y--;
        }
        else if (it == 'R') {
            if (x == 5)
                continue;
            if (!horizontal[x + 5][y + 5]) {
                answer++;
                horizontal[x + 5][y + 5] = true;
            }
            x++;
        }
        else if (it == 'L') {
            if (x == -5)
                continue;
            if (!horizontal[x + 4][y + 5]) {
                answer++;
                horizontal[x + 4][y + 5] = true;
            }
            x--;
        }
    }
    return answer;
}