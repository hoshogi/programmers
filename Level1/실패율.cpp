/*
Title   : 실패율
Author  : Hoseok Lee
Date    : 2022/04/15
https://programmers.co.kr/learn/courses/30/lessons/42889
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare (pair<double, int> prev, pair<double, int> next) {
    if (prev.first == next.first)
        return prev.second < next.second;
    return prev.first > next.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int> > failure;
    int people = stages.size();
    
    sort(stages.begin(), stages.end());
    for (int i = 1; i <= N; i++) {
        int num = upper_bound(stages.begin(), stages.end(), i) - lower_bound(stages.begin(), stages.end(), i);
        if (people == 0)
            failure.push_back({0, i});
        else
            failure.push_back({(double)num / people, i});
        people -= num;
    }
    
    sort(failure.begin(), failure.end(), compare);
    for (auto it : failure)
        answer.push_back(it.second);
        
    return answer;
}
