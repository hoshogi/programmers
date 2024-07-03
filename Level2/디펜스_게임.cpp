/*
Title   : 디펜스 게임
Author  : Hoseok Lee
Date    : 2024/07/03

https://school.programmers.co.kr/learn/courses/30/lessons/142085
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, int k, vector<int> enemy) {
    int answer = 0;
    priority_queue<int> pq;
    
    for (auto it : enemy) {
        pq.push(it);
        n -= it;
        answer++;
        
        if (n >= 0) {
            continue;
        }
        if (k <= 0) {
            answer--;
            break;
        }
        
        k--;
        n += pq.top();
        pq.pop();
    }
    return answer;
}
