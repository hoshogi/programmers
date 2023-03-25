/*
Title   : 공원 산책
Author  : Hoseok Lee
Date    : 2023/03/25
https://school.programmers.co.kr/learn/courses/30/lessons/172928
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int r, c;

void calculate(vector<string> park, char direction, int dist) {
    int tempR = r;
    int tempC = c;
    
    switch (direction) {
        case 'N':
            tempR -= dist;
            break;
        case 'S':
            tempR += dist;
            break;
        case 'W':
            tempC -= dist;
            break;
        case 'E':
            tempC += dist;
            break;
    }
    
    if (tempR < 0 || tempR >= park.size() || tempC < 0 || tempC >= park[0].length())
        return;
    for (int i = min(r, tempR); i <= max(r, tempR); i++) {
        for (int j = min(c, tempC); j <= max(c, tempC); j++) {
            if (park[i][j] == 'X')
                return;
        }
    }
    r = tempR;
    c = tempC;
}

vector<int> solution(vector<string> park, vector<string> routes) {   
    for (int i = 0; i < park.size(); i++) {
        for (int j = 0; j < park[i].length(); j++) {
            if (park[i][j] == 'S') {
                r = i;
                c = j;
            }
        }
    }
    for (auto it : routes) 
        calculate(park, it[0], it[2] - '0');
    return {r, c};
}