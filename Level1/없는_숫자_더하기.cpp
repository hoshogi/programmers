/*
Title   : 없는 숫자 더하기
Author  : Hoseok Lee
Date    : 2022/05/12
https://programmers.co.kr/learn/courses/30/lessons/86051
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool check[10] = {false, };
    
    for (auto it : numbers)
        check[it] = true;
    
    for (int i = 0; i < 10; i++)
        if (!check[i])
            answer += i;
    
    return answer;
}
