/*
Title   : 최솟값 만들기
Author  : Hoseok Lee
Date    : 2022/07/21
https://school.programmers.co.kr/learn/courses/30/lessons/12941
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<>());
    
    for (int i = 0; i < A.size(); i++)
        answer += A[i] * B[i];
    
    return answer;
}
