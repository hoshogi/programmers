/*
Title   : 모의고사
Author  : Hoseok Lee
Date    : 2022/06/20
https://programmers.co.kr/learn/courses/30/lessons/42840
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int count[3] = {0, };
    vector<pair<int, int> > result;
    vector<vector<int> > submit;
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> v3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    submit.push_back(v1);
    submit.push_back(v2);
    submit.push_back(v3);
    
    for (int i = 0; i < answers.size(); i++)
        for (int j = 0; j < 3; j++)
            if (answers[i] == submit[j][i % submit[j].size()])
                count[j]++;
    
    for (int i = 0; i < 3; i++)
        result.push_back({count[i], i + 1});
    sort(result.begin(), result.end(), greater<>());

    int temp = result[0].first;
    for (int i = 2; i >= 0; i--)
        if (temp == result[i].first)
            answer.push_back(result[i].second);
    
    return answer;
}
