/*
Title   : 다음 큰 숫자
Author  : Hoseok Lee
Date    : 2022/07/13
https://school.programmers.co.kr/learn/courses/30/lessons/12911
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int binary(int num) {
    int count = 0;
    
    while (num != 0) {
        if (num % 2 == 1)
            count++;
        num /= 2;
    }
    
    return count;
}

int solution(int n) {
    int num = binary(n);
    
    for (int i = n + 1; ; i++) {
        if (num == binary(i))
            return i;
    }
}
