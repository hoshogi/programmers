/*
Title   : 땅따먹기
Author  : Hoseok Lee
Date    : 2022/09/28
https://school.programmers.co.kr/learn/courses/30/lessons/12913
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    int d[100000][4] = {0, };
    
    for (int i = 0; i < 4; i++)
        d[0][i] = land[0][i];
    
    for (int i = 1; i < land.size(); i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                if (j == k)
                    continue;
                d[i][j] = max(d[i][j], d[i - 1][k]);
            }
            d[i][j] += land[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++)
        answer = max(answer, d[land.size() - 1][i]);
    return answer;
}
