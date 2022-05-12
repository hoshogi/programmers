/*
Title   : 제일 직은 수 제거하기
Author  : Hoseok Lee
Date    : 2022/05/12
https://programmers.co.kr/learn/courses/30/lessons/12935
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }
    
    int minNum = arr[0], minIndex = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minNum) {
            minNum = arr[i];
            minIndex = i;
        }
    }
    
    arr.erase(arr.begin() + minIndex);
    return arr;
}
