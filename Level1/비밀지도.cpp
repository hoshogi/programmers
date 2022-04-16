/*
Title   : 비밀지도
Author  : Hoseok Lee
Date    : 2022/04/16
https://programmers.co.kr/learn/courses/30/lessons/17681
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for (int i = 0; i < n; i++) {
        int mul = 1;
        int num = arr1[i] | arr2[i];
        string result = "";
        for (int j = 0; j < n; j++)
            mul *= 2;
        for (int j = 0; j < n; j++) {
            mul /= 2;
            if (num >= mul) {
                result += "#";
                num -= mul;
            }
            else
                result += " ";
            if (j == n - 1)
                answer.push_back(result);
        }
    }
    
    return answer;
}
