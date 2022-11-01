/*
Title   : 7의 개수
Author  : Hoseok Lee
Date    : 2022/11/01
https://school.programmers.co.kr/learn/courses/30/lessons/120912
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for (auto it : array) {
        string str = to_string(it);
        
        for (int i = 0; i < str.length(); i++) 
            if (str[i] == '7')
                answer++;
    }
    return answer;
}