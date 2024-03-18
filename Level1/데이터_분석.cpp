/*
Title   : 데이터 분석
Author  : Hoseok Lee
Date    : 2024/03/18

https://school.programmers.co.kr/learn/courses/30/lessons/250121
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sortIndex;

int getIndex(string info) {
    if (info == "code")
        return 0;
    if (info == "date")
        return 1;
    if (info == "maximum")
        return 2;
    if (info == "remain")
        return 3;
}

bool compare(vector<int> prev, vector<int> next) {
    return prev[sortIndex] < next[sortIndex];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    int extIndex = getIndex(ext);
    
    for (auto it : data) {
        if (it[extIndex] < val_ext)
            answer.push_back(it);
    }
    sortIndex = getIndex(sort_by);
    sort(answer.begin(), answer.end(), compare);
    return answer;
}