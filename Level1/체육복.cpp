/*
Title   : 체육복
Author  : Hoseok Lee
Date    : 2022/07/04
https://programmers.co.kr/learn/courses/30/lessons/42862
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int clothes[32] = {0, };
    fill_n(clothes + 1, n, 1);
    
    for (auto it : lost)
        clothes[it]--;
    
    for (auto it : reserve)
        clothes[it]++;
    
    for (int i = 1; i <= n; i++) {
        if (clothes[i] > 0)
            answer++;
        else {
            if (clothes[i - 1] == 2) {
                answer++;
                continue;
            }

            if (clothes[i + 1] == 2) {
                answer++;
                clothes[i + 1]--;
                continue;
            }
        }
    }
    
    return answer;
}
