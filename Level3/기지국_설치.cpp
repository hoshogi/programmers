/*
Title   : 기지국 설치
Author  : Hoseok Lee
Date    : 2023/03/29
https://school.programmers.co.kr/learn/courses/30/lessons/12979
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<int> stations, int w) {
    int answer = 0, index = 0;
    
    for (int i = 1; i <= n; i++) {
        if (index >= stations.size()) {
            answer++;
            i += 2 * w;
            continue;
        }
        
        if (i < stations[index] - w) {
            answer++;
            i += 2 * w;
        }
        else {
            i = stations[index] + w;
            index++;
        }
    }
    return answer;
}