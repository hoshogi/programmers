/*
Title   : 숫자 변환하기
Author  : Hoseok Lee
Date    : 2023/01/28
https://school.programmers.co.kr/learn/courses/30/lessons/154538
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int solution(int x, int y, int n) {
    int answer = 1e9;
    queue<pair<long long, int>> q;
    map<long long, int> m;
    
    q.push({x, 0});
    while (!q.empty()) {
        long long num = q.front().first;
        int count = q.front().second + 1;
        q.pop();
        
        if (num * 2 == y || num * 3 == y || num + n == y) {
            answer = min(answer, count);
            break;
        }
        if (num * 2 < y) {
            if (m[num * 2] == 0 || count < m[num * 2]) {
                q.push({num * 2, count});
                m[num * 2] = count;
            }
        }
        if (num * 3 < y) {
            if (m[num * 3] == 0 || count < m[num * 3]) {
                q.push({num * 3, count});
                m[num * 3] = count;
            }
        }
        if (num + n < y) {
            if (m[num + n] == 0 || count < m[num + n]) {
                q.push({num + n, count});
                m[num + n] = count;
            }
        }
    }
    
    if (x == y)
        return 0;
    if (answer == 1e9)
        return -1;
    return answer;
}