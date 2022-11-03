/*
Title   : 직사각형 넓이 구하기
Author  : Hoseok Lee
Date    : 2022/11/03
https://school.programmers.co.kr/learn/courses/30/lessons/120860
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int minX = 257, minY = 257, maxX = -257, maxY = -257;
    
    for (auto it : dots) {
        minX = min(minX, it[0]);
        minY = min(minY, it[1]);
        maxX = max(maxX, it[0]);
        maxY = max(maxY, it[1]);
    }
    return (maxX - minX) * (maxY - minY);
}