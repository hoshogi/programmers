/*
Title   : 단속카메라
Author  : Hoseok Lee
Date    : 2023/04/17
https://school.programmers.co.kr/learn/courses/30/lessons/42884
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0;
    
    sort(routes.begin(), routes.end());
    for (int i = 0; i < routes.size(); i++) {
        answer++;
        int end = routes[i][1];
        
        while (i < routes.size()) {
            if (routes[i][0] <= end) {
                end = min(end, routes[i][1]);
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