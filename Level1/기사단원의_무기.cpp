/*
Title   : 기사단원의 무기
Author  : Hoseok Lee
Date    : 2023/01/10
https://school.programmers.co.kr/learn/courses/30/lessons/136798
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int count(int num) {
    int result = 0;
    
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num)
            result++;
        else if (num % i == 0)
            result += 2;
    }
    return result;
} 

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; i++) {
        int num = count(i);
        answer += num <= limit ? num : power;  
    }
    return answer;
}