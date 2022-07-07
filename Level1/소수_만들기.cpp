/*
Title   : 소수 만들기
Author  : Hoseok Lee
Date    : 2022/07/07
https://school.programmers.co.kr/learn/courses/30/lessons/12977
https://github.com/hoshogi
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    bool check[3001] = {true, true, false};
    
    for (int i = 2; i <= 3000; i++) {
        if (!check[i]) {
            for (int j = 2 * i; j <= 3000; j += i)
                check[j] = true;
        }
    }
    
    vector <bool> v(nums.size());
    fill(v.end() - (nums.size() - 3), v.end(), true);
    
    do {
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            if (!v[i])
                sum += nums[i];
        }
        
        if (!check[sum])
            answer++;
    } while(next_permutation(v.begin(), v.end()));

    return answer;
}
