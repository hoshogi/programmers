/*
Title   : H-Index
Author  : Hoseok Lee
Date    : 2022/07/25
https://school.programmers.co.kr/learn/courses/30/lessons/42747
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    
    for (int i = 0; i < citations.size(); i++) {
        int h = citations.size() - i;
        
        if (citations[i] >= h)
            answer = max(answer, h);
    }
    
    return answer;
}
