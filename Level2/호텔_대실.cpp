/*
Title   : 호텔 대실
Author  : Hoseok Lee
Date    : 2023/02/04
https://school.programmers.co.kr/learn/courses/30/lessons/155651
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    sort(book_time.begin(), book_time.end());
    for (auto it : book_time) {
        int start = stoi(it[0].substr(0, 2)) * 60 + stoi(it[0].substr(3, 2));
        int end = stoi(it[1].substr(0, 2)) * 60 + stoi(it[1].substr(3, 2)) + 10;
        
        while (!pq.empty() && pq.top() <= start)
            pq.pop();
        pq.push(end);
        answer = max(answer, (int)pq.size());
    }
    return answer;
}