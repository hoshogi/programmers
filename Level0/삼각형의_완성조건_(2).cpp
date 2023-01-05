/*
Title   : 삼각형의 완성조건 (2)
Author  : Hoseok Lee
Date    : 2023/01/05
https://school.programmers.co.kr/learn/courses/30/lessons/120868
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    for (int i = 1; i < 2 * max(sides[0], sides[1]); i++) {
        vector<int> v(sides);
        
        v.push_back(i);
        sort(v.begin(), v.end());
        if (v[2] < v[0] + v[1])
            answer++;
    }
    return answer;
}