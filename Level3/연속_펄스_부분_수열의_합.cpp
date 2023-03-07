/*
Title   : 연속 펄스 부분 수열의 합
Author  : Hoseok Lee
Date    : 2023/03/07
https://school.programmers.co.kr/learn/courses/30/lessons/161988
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

long long d[500000][2];

long long solution(vector<int> sequence) {
    long long answer = -1e11;
    d[0][0] = sequence[0];
    d[0][1] = -sequence[0];
    
    for (int i = 1; i < sequence.size(); i++) {
        d[i][0] = sequence[i] > d[i - 1][1] + sequence[i] ? sequence[i] : d[i - 1][1] + sequence[i];
        d[i][1] = -sequence[i] > d[i - 1][0] - sequence[i] ? -sequence[i] : d[i - 1][0] - sequence[i];
    }
    for (int i = 0; i < sequence.size(); i++) {
        answer = answer > d[i][0] ? answer : d[i][0];
        answer = answer > d[i][1] ? answer : d[i][1];
    }
    return answer;
}