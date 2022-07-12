/*
Title   : 프린터
Author  : Hoseok Lee
Date    : 2022/07/12
https://school.programmers.co.kr/learn/courses/30/lessons/42587
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int priority[10] = {0, };
    int max_priority = 0;
    queue<pair<int, int> > q;
    
    for (int i = 0; i < priorities.size(); i++) {
        priority[priorities[i]]++;
        max_priority = max(max_priority, priorities[i]);
        q.push({priorities[i], i});
    }
    
    while (true) {
        if (q.front().first == max_priority) {
            answer++;
            if (q.front().second == location)
                break;
            priority[q.front().first]--;
            if (priority[q.front().first] == 0) {
                for (int i = q.front().first; i > 0; i--) {
                    if (priority[i] != 0) {
                        max_priority = i;
                        break;
                    }
                }
            }
            q.pop();
        }
        else {
            q.push(q.front());
            q.pop();
        }
    }
    
    return answer;
}
