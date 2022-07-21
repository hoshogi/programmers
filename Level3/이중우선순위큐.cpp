/*
Title   : 이중우선순위큐
Author  : Hoseok Lee
Date    : 2022/07/22
https://school.programmers.co.kr/learn/courses/30/lessons/42628
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int> > min_heap;
    map<int, int> m;
    
    for (auto it : operations) {
        if (it == "D 1") {
            while (!max_heap.empty() && m[max_heap.top()] == 0)
                max_heap.pop();
            
            if (!max_heap.empty()) {
                m[max_heap.top()]--;
                max_heap.pop();
            }
        }
        else if (it == "D -1") {
            while (!min_heap.empty() && m[min_heap.top()] == 0)
                min_heap.pop();
            
            if (!min_heap.empty()) {
                m[min_heap.top()]--;
                min_heap.pop();
            }
        }
        else {
            int num = stoi(it.substr(2));
            
            max_heap.push(num);
            min_heap.push(num);
            if (m.find(num) != m.end())
                m[num]++;
            else
                m[num] = 1;
        }
    }
    
    if (max_heap.empty() || min_heap.empty()) {
        answer.push_back(0);
        answer.push_back(0);
    }
    else {
        while (!max_heap.empty() && m[max_heap.top()] == 0)
            max_heap.pop();
        answer.push_back(max_heap.top());
        while (!min_heap.empty() && m[min_heap.top()] == 0)
            min_heap.pop();
        answer.push_back(min_heap.top());
    }
    
    return answer;
}
