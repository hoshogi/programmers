/*
Title   : 롤케이크 자르기
Author  : Hoseok Lee
Date    : 2023/01/26
https://school.programmers.co.kr/learn/courses/30/lessons/132265
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0, leftCount = 0, rightCount = 0;
    int left[10001] = {0, };
    int right[10001] = {0, };
    
    for (auto it : topping) {
        if (right[it] == 0)
            rightCount++;
        right[it]++;
    }
    
    for (auto it : topping) {
        if (left[it] == 0) 
            leftCount++;
        left[it]++;
        right[it]--;
        if (right[it] == 0)
            rightCount--;
        if (leftCount == rightCount)
            answer++;
    }
    return answer;
}