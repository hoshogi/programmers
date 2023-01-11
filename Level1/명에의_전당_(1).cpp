/*
Title   : 명예의 전당 (1)
Author  : Hoseok Lee
Date    : 2023/01/11
https://school.programmers.co.kr/learn/courses/30/lessons/138477
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (auto it : score) {
        if (minHeap.size() < k)
            minHeap.push(it);
        else if (it > minHeap.top()) {
                minHeap.pop();
                minHeap.push(it);
        }
        answer.push_back(minHeap.top());
    }
    return answer;
}