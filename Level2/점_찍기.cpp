/*
Title   : 점 찍기
Author  : Hoseok Lee
Date    : 2023/03/10
https://school.programmers.co.kr/learn/courses/30/lessons/140107
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#define MAX 1000000

using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
    long double limit = ((long double)d / k) * ((long double)d / k);
    vector<long long> v;
    
    for (long long i = 0; i <= MAX; i++) 
        v.push_back(i * i);
    for (long long i = 0; i <= MAX; i++) {
        if (i * i > limit)
            break;
        answer += upper_bound(v.begin(), v.end(), limit - i * i) - v.begin();
    }
    return answer;
}