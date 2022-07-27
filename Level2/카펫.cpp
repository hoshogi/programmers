/*
Title   : 카펫
Author  : Hoseok Lee
Date    : 2022/07/27
https://school.programmers.co.kr/learn/courses/30/lessons/42842
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int area = brown + yellow;
    
    for (int i = 1; i <= area; i++) {
        if (area % i == 0) {
            int x = i;
            int y = area / i;
            
            if (((x - 2) * (y - 2)) == yellow) {
                answer.push_back(max(x, y));
                answer.push_back(min(x, y));
                return answer;
            }
        }
    }
}
