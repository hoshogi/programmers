/*
Title   : 피로도
Author  : Hoseok Lee
Date    : 2022/08/06
https://school.programmers.co.kr/learn/courses/30/lessons/87946
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;

    sort(dungeons.begin(), dungeons.end());
    do {
        int temp = k;
        int result = 0;
        
        for (auto it : dungeons) {
            if (temp >= it[0]) {
                temp -= it[1];
                result++;
            }
        }

        answer = max(answer, result);
    } while (next_permutation(dungeons.begin(), dungeons.end()));

    return answer;
}
