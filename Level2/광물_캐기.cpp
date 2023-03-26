/*
Title   : 광물 캐기
Author  : Hoseok Lee
Date    : 2023/03/26
https://school.programmers.co.kr/learn/courses/30/lessons/172927
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int weight(string str) {
    if (str == "diamond")
        return 25;
    if (str == "iron")
        return 5;
    return 1;
}

int calculateCost(int pick, string mineral) {
    if (pick == 2) {
        if (mineral == "diamond")
            return 25;
        if (mineral == "iron")
            return 5;
    }
    else if (pick == 1) {
        if (mineral == "diamond")
            return 5;
    }
    return 1;
}

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 0, pickSum = 0, pickIndex = 0;
    priority_queue<pair<int, int>> pq;
    
    for (auto it : picks)
        pickSum += it;
    for (int i = 0; i < min((int)minerals.size(), pickSum * 5); i++) {
        int sum = 0;
        for (int j = i; j < min(min((int)minerals.size(), pickSum * 5), i + 5); j++)
            sum += weight(minerals[j]);
        pq.push({sum, i});
        i += 4;
    }
    
    while (!pq.empty()) {
        int index = pq.top().second;
        pq.pop();
        
        while (picks[pickIndex] == 0)
            pickIndex++;
        if (pickIndex == 3)
            break;
        picks[pickIndex]--;
        for (int i = index; i < min(min((int)minerals.size(), pickSum * 5), index + 5); i++) 
            answer += calculateCost(pickIndex, minerals[i]);
    }
    return answer;
}