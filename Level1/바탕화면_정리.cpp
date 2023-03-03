/*
Title   : 바탕화면 정리
Author  : Hoseok Lee
Date    : 2023/03/03
https://school.programmers.co.kr/learn/courses/30/lessons/161990
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int minR = 51, minC = 51, maxR = 0, maxC = 0;
    
    for (int i = 0; i < wallpaper.size(); i++) {
        for (int j = 0; j < wallpaper[i].size(); j++) {
            if (wallpaper[i][j] == '#') {
                minR = min(minR, i);
                minC = min(minC, j);
                maxR = max(maxR, i + 1);
                maxC = max(maxC, j + 1);
            }
        }
    }
    return {minR, minC, maxR, maxC};
}