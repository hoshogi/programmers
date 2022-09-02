/*
Title   : 숫자 블록
Author  : Hoseok Lee
Date    : 2022/09/02
https://school.programmers.co.kr/learn/courses/30/lessons/12923
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#define NUM 10000000

using namespace std;

vector<int> solution(long long begin, long long end) {
    vector<int> answer;
    
    for (int i = begin; i <= end; i++) {
        bool check = false;
        
        if (i == 1) {
            answer.push_back(0);
            continue;
        }
        
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                int temp = i / j;
                if (temp <= NUM) {
                    check = true;
                    answer.push_back(temp);
                    break;
                }
            }
        }
        
        if (!check)
            answer.push_back(1);
    }
    
    return answer;
}
