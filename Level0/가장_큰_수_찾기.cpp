/*
Title   : 가장 큰 수 찾기
Author  : Hoseok Lee
Date    : 2022/11/13
https://school.programmers.co.kr/learn/courses/30/lessons/120899
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    int maxIndex = -1, maxNum = -1;
    
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > maxNum) {
            maxNum = array[i];
            maxIndex = i;
        }
    }
    return {maxNum, maxIndex};
}