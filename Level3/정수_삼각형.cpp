/*
Title   : 정수 삼각형
Author  : Hoseok Lee
Date    : 2022/07/26
https://school.programmers.co.kr/learn/courses/30/lessons/43105
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int d[500][500] = { triangle[0][0], 0, };
    
    for (int i = 1; i < triangle.size(); i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            if (j == 0)
                d[i][j] = d[i - 1][j];
            else if (j == triangle[i].size() - 1)
                d[i][j] = d[i - 1][j - 1];
            else
                d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]);
            d[i][j] += triangle[i][j];
        }
    }
    
    for (int j = 0; j < triangle.size(); j++)
        answer = max(answer, d[triangle.size() - 1][j]);
    
    return answer;
}
