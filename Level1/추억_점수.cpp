/*
Title   : 추억 점수
Author  : Hoseok Lee
Date    : 2023/04/12
https://school.programmers.co.kr/learn/courses/30/lessons/176963
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> score;
    
    for (int i = 0; i < name.size(); i++) 
        score[name[i]] = yearning[i];
    for (auto it : photo) {
        int result = 0;
        
        for (int i = 0; i < it.size(); i++) 
            result += score[it[i]];
        answer.push_back(result);
    }
    return answer;
}