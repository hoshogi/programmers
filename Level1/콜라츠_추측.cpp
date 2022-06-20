/*
Title   : 콜라츠 추측
Author  : Hoseok Lee
Date    : 2022/06/20
https://programmers.co.kr/learn/courses/30/lessons/12943
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long x = num;
    
    while (true) {
        if (x == 1)
            break;
        if (answer == 500) {
            answer = -1;
            break;
        }
        
        answer++;
        if (x % 2 == 0)
            x /= 2;
        else {
            x *= 3;
            x++;
        }
    }
    return answer;
}
