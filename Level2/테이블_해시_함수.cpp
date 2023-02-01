/*
Title   : 테이블 해시 함수
Author  : Hoseok Lee
Date    : 2023/02/01
https://school.programmers.co.kr/learn/courses/30/lessons/147354
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int index;

bool compare(vector<int> prev, vector<int> next) {
    if (prev[index] == next[index])
        return prev[0] > next[0];
    return prev[index] < next[index];
}

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    index = col - 1;
    vector<int> v;
    
    sort(data.begin(), data.end(), compare);
    for (int i = row_begin - 1; i < row_end; i++) {
        int result = 0;
        for (auto it : data[i]) 
            result += it % (i + 1);
        v.push_back(result);
    }
    
    int answer = v[0];
    for (int i = 1; i < v.size(); i++) 
        answer ^= v[i];
    return answer;
}