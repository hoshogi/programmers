/*
Title   : 구명보트
Author  : Hoseok Lee
Date    : 2022/10/13
https://school.programmers.co.kr/learn/courses/30/lessons/42885
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> dq;
    
    sort(people.begin(), people.end());
    for (auto it : people)
        dq.push_back(it);
    while (!dq.empty()) {
        answer++;
        int back = dq.back();
        dq.pop_back();
        
        if (dq.empty())
            break;
        if (back + dq.front() <= limit)
            dq.pop_front();
    }
    return answer;
}
