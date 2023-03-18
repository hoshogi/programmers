/*
Title   : 할인 행사
Author  : Hoseok Lee
Date    : 2023/03/18
https://school.programmers.co.kr/learn/courses/30/lessons/131127
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

bool check(map<string, int> wantMap, map<string, int> buyMap) {
    for (auto it : wantMap) {
        if (buyMap.find(it.first) == buyMap.end())
            return false;
        if (buyMap[it.first] != it.second)
            return false;
    }
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> wantMap;
    map<string, int> buyMap;
    
    for (int i = 0; i < want.size(); i++) 
        wantMap[want[i]] = number[i];
    for (int i = 0; i < 9; i++)
        buyMap[discount[i]]++;
    
    for (int i = 9; i < discount.size(); i++) {
        buyMap[discount[i]]++;
        if (check(wantMap, buyMap))
            answer++;
        buyMap[discount[i - 9]]--;
    }
    return answer;
}