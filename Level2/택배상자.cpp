/*
Title   : 택배상자
Author  : Hoseok Lee
Date    : 2024/10/03

https://school.programmers.co.kr/learn/courses/30/lessons/131704
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    
    queue<int> mainBelt;
    stack<int> subBelt;
    
    for (int i = 1; i <= order.size(); i++) {
        mainBelt.push(i);
    }
    
    for (auto it : order) {
        bool isEnd = false;
        
        if (!subBelt.empty() && subBelt.top() == it) {
            answer++;
            subBelt.pop();
            continue;
        }
        while (!mainBelt.empty()) {
            if (mainBelt.front() != it) {
                subBelt.push(mainBelt.front());
                mainBelt.pop();
                
                if (mainBelt.empty()) {
                    isEnd = true;
                    break;
                }
                continue;
            }
            answer++;
            mainBelt.pop();
            break;
        }
        if (isEnd) {
            break;
        }
    }
    return answer;
}
