/*
Title   : 숫자의 표현
Author  : Hoseok Lee
Date    : 2022/07/12
https://school.programmers.co.kr/learn/courses/30/lessons/12924
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n) {
    int answer = 0, sum = 0;
    queue<int> q;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
        q.push(i);
        
        while (sum > n) {
            if (!q.empty()) {
                sum -= q.front();
                q.pop();
            }
        }
        
        if (sum == n)
            answer++;
    }
    
    return answer;
}
