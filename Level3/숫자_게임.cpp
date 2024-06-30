/*
Title   : 숫자 게임
Author  : Hoseok Lee
Date    : 2024/06/30

https://school.programmers.co.kr/learn/courses/30/lessons/12987
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    int aIndex = 0, bIndex = 0;
    
    sort(A.begin(), A.end(), greater<>());
    sort(B.begin(), B.end(), greater<>());
    
    while (aIndex < A.size() && bIndex < B.size()) {
        if (B[bIndex] > A[aIndex]) {
            bIndex++;
            answer++;
        }
        aIndex++;
    }
    return answer;
}