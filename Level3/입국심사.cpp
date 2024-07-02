/*
Title   : 입국심사
Author  : Hoseok Lee
Date    : 2024/07/02

https://school.programmers.co.kr/learn/courses/30/lessons/43238
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#define MAX 1e18

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = MAX;
    long long left = 1;
    long long right = MAX;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long count = 0;
        
        for (auto it : times) {
            count += mid / it;
        }
        if (count >= n) {
            right = mid - 1;
            answer = mid;
            continue;
        }
        left = mid + 1;
    }
    return answer;
}
