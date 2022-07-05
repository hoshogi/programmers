/*
Title   : 최소직사각형
Author  : Hoseok Lee
Date    : 2022/07/05
https://school.programmers.co.kr/learn/courses/30/lessons/86491
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0, height = 0;
    
    for (auto it : sizes) {
        int min_value = min(it[0], it[1]);
        int max_value = max(it[0], it [1]);
        width = max(width, min_value);
        height = max(height, max_value);
    }
    
    return width * height;
}
