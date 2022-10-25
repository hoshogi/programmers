/*
Title   : 연속 부분 수열 합의 개수
Author  : Hoseok Lee
Date    : 2022/10/25
https://school.programmers.co.kr/learn/courses/30/lessons/131701
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> elements) {
    vector<int> result;

    for (int i = 0; i < elements.size(); i++) {
        int sum = 0;
        for (int j = 0; j < elements.size(); j++) {
            int index = i + j;
            if (index >= elements.size())
                index -= elements.size();
            sum += elements[index];
            result.push_back(sum);
        }
    }

    sort(result.begin(), result.end());    
    result.erase(unique(result.begin(), result.end()), result.end());
    return result.size();
}