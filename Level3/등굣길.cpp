/*
Title   : 등굣길
Author  : Hoseok Lee
Date    : 2022/08/01
https://school.programmers.co.kr/learn/courses/30/lessons/42898
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#define MOD 1000000007

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int d[101][101] = {0, };
    bool puddle[101][101] = {false, };
    
    for (auto it : puddles)
        puddle[it[0]][it[1]] = true;
    
    for (int i = 2; i <= m; i++) {
        if (puddle[i][1])
            break;
        d[i][1] = 1;
    }
        
    for (int i = 2; i <= n; i++) {
        if (puddle[1][i])
            break;
        d[1][i] = 1;
    }
     
    
    for (int i = 2; i <= m; i++) {
        for (int j = 2; j <= n; j++) {
            if (puddle[i][j])
                continue;
            d[i][j] += d[i - 1][j] + d[i][j -1];
            d[i][j] %= MOD;
        }
    }
    
    return d[m][n];
}
