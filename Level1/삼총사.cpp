/*
Title   : 삼총사
Author  : Hoseok Lee
Date    : 2022/10/13
https://school.programmers.co.kr/learn/courses/30/lessons/131705
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    vector<bool> check(number.size());
    
    fill_n(check.begin(), 3, false);
    fill_n(check.begin() + 3, number.size() - 3, true);
    do {
        int sum = 0;
        for (int i = 0; i < check.size(); i++) {
            if (!check[i])
                sum += number[i];
        }
        if (sum == 0)
            answer++;
    } while (next_permutation(check.begin(), check.end()));
    return answer;
}
