/*
Title   : 예산
Author  : Hoseok Lee
Date    : 2022/07/04
https://programmers.co.kr/learn/courses/30/lessons/12982
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(), d.end());
    for (auto it : d) {
        budget -= it;
        if (budget >= 0)
            answer++;
        else
            break;
    }
    
    return answer;
}
