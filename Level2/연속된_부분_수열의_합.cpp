/*
Title   : 연속된 부분 수열의 합
Author  : Hoseok Lee
Date    : 2023/04/15
https://school.programmers.co.kr/learn/courses/30/lessons/178870
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool compare(pair<int, int> prev, pair<int, int> next) {
    if ((prev.second - prev.first) == (next.second - next.first))
        return prev.first < next.first;
    return (prev.second - prev.first) < (next.second - next.first);
}

vector<int> solution(vector<int> sequence, int k) {
    int sum = 0;
    vector<pair<int, int>> result;
    queue<pair<int, int>> q;
    
    for (int i = 0; i < sequence.size(); i++) {
        sum += sequence[i];
        q.push({i, sequence[i]});
        while (sum > k && !q.empty()) {
            sum -= q.front().second;
            q.pop();
        }
        if (sum == k)
            result.push_back({q.front().first, i});
    }
    sort(result.begin(), result.end(), compare);
    return {result[0].first, result[0].second};
}