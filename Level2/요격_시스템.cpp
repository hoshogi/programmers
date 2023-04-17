/*
Title   : 요격 시스템
Author  : Hoseok Lee
Date    : 2023/04/17
https://school.programmers.co.kr/learn/courses/30/lessons/181188
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets) {
    int answer = 0;
    
    sort(targets.begin(), targets.end());
    for (int i = 0; i < targets.size(); i++) {
        answer++;
        int end = targets[i][1];
        
        while (i < targets.size()) {
            if (targets[i][0] < end) {
                end = min(end, targets[i][1]);
                i++;
            }
            else {
                i--;
                break;
            }
        }
    }
    return answer;
}