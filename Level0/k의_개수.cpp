/*
Title   : k의 개수
Author  : Hoseok Lee
Date    : 2022/12/06
https://school.programmers.co.kr/learn/courses/30/lessons/120887
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for (int l = i; l <= j; l++) {
        string str = to_string(l);
        for (auto it : str) 
            if (it == k + '0')
                answer++;
    }
    return answer;
}