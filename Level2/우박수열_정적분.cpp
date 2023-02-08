/*
Title   : 우박수열 정적분
Author  : Hoseok Lee
Date    : 2023/02/08
https://school.programmers.co.kr/learn/courses/30/lessons/134239
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<double> solution(int k, vector<vector<int>> ranges) {
    vector<double> answer;
    vector<int> y;
    vector<double> area;
    
    y.push_back(k);
    while (k != 1) {
        if (k % 2 == 0)
            k /= 2;
        else
            k = k * 3 + 1;
        y.push_back(k);
    }
    
    for (int i = 0; i < y.size() - 1; i++)  
        area.push_back((y[i] + y[i + 1]) / 2.0);
    
    for (auto it : ranges) {
        int start = it[0];
        int end = y.size() + it[1] - 1;
        double result = 0;
        
        if (start > end) {
            answer.push_back(-1);
            continue;
        }
    
        for (int i = start; i < end; i++) 
            result += area[i];
        answer.push_back(result);
    }
    return answer;
}