/*
Title   : 정수 내림차순으로 배치하기
Author  : Hoseok Lee
Date    : 2022/05/12
https://programmers.co.kr/learn/courses/30/lessons/12933
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str = to_string(n);
    
    sort(str.begin(), str.end(), greater<>());
    answer = stoll(str);
    return answer;
}
