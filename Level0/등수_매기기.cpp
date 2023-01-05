/*
Title   : 등수 매기기
Author  : Hoseok Lee
Date    : 2023/01/05
https://school.programmers.co.kr/learn/courses/30/lessons/120882
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> sum;
    map<int, int> rank;
    
    for (auto it : score) 
        sum.push_back(it[0] + it[1]);
    sort(sum.begin(), sum.end(), greater<>());
    
    int prevSum = -1;
    int prevRank = 0;
    
    for (int i = 0; i < sum.size(); i++) {
        if (prevSum != sum[i]) {
            rank[sum[i]] = i + 1;
            prevRank = i + 1;
        }
        prevSum = sum[i];
    }
    
    for (auto it : score) 
        answer.push_back(rank[it[0] + it[1]]);
    return answer;
}