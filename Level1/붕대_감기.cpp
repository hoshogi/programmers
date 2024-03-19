/*
Title   : 붕대 감기
Author  : Hoseok Lee
Date    : 2024/03/19

https://school.programmers.co.kr/learn/courses/30/lessons/250137
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int prev = 0;
    int maxHealth = health;
    
    for (auto it : attacks) {
        int total = it[0] - prev - 1;
        
        health += total * bandage[1] + total / bandage[0] * bandage[2];
        health = min(health, maxHealth);
        health -= it[1];
        
        if (health <= 0)
            return -1;
        prev = it[0];
    }
    return health;
}