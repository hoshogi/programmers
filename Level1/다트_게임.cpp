/*
Title   : 다트 게임
Author  : Hoseok Lee
Date    : 2022/05/03
https://programmers.co.kr/learn/courses/30/lessons/17682
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int count = -1;
    vector<int> v(3);
    
    for (int i = 0; i < dartResult.length(); i++) {
        if (dartResult[i] >= '0' && dartResult[i] <= '9') {
            count++;
            if (dartResult[i] == '1' &&  dartResult[i + 1] == '0') {
                v[count] = 10;
                i++;
            }
            else
                v[count] = dartResult[i] - '0';
        }
        if (dartResult[i] == 'D')
            v[count] *= v[count];
        if (dartResult[i] == 'T')
            v[count] *= v[count] * v[count];
        if (dartResult[i] == '*') {
            v[count] *= 2;
            if (count > 0)
                v[count - 1] *= 2;
        }
        if (dartResult[i] == '#')
            v[count] = -v[count];
    }
    
    for (auto it : v)
        answer += it;
    return answer;
}
