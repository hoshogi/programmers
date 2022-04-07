/*
Title   : K번째수
Author  : Hoseok Lee
Date    : 2022/04/07
https://programmers.co.kr/learn/courses/30/lessons/42748
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++) {
        vector<int> temp;

        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
            temp.push_back(array[j]);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
    }
    return answer;
}