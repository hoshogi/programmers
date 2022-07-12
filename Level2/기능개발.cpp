/*
Title   : 기능 개발
Author  : Hoseok Lee
Date    : 2022/07/12
https://school.programmers.co.kr/learn/courses/30/lessons/42586
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int count = 0;
    int day = 0;
    
    for (int i = 0; i < progresses.size(); i++) {
        day += ceil((100 - progresses[i]) / (double)speeds[i]);

        while (progresses[i] + speeds[i] * day >= 100) {
            if (i == progresses.size())
                break;
            count++;
            i++;
        }
        
        if (i != progresses.size()) {
            progresses[i] += speeds[i] * day;
            i--;
        }
        
        if (count > 0) {
            answer.push_back(count);
            count = 0;
        }
    }
    
    return answer;
}
