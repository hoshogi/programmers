/*
Title   : 타겟 넘버
Author  : Hoseok Lee
Date    : 2022/09/21
https://school.programmers.co.kr/learn/courses/30/lessons/43165
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool check(int sum, int num, int target) {
    if (sum + num == target || sum - num == target)
        return true;
    return false;
}

int bfs(vector<int> numbers, int target) {
    int count = 0;
    queue<pair<int, int> > q;
    q.push({0, numbers[0]});
    q.push({0, -numbers[0]});
    
    while (!q.empty()) {
        int index = q.front().first + 1;
        int num = q.front().second;
        q.pop();
        
        if (index == numbers.size() - 1) {
            if (check(num, numbers[index], target))
                count++;
            continue;
        }
        
        q.push({index, num + numbers[index]});
        q.push({index, num - numbers[index]});
    }
    return count;
}

int solution(vector<int> numbers, int target) {
    return bfs(numbers, target);
}
