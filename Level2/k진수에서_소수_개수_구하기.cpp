/*
Title   : k진수에서 소수 개수 구하기
Author  : Hoseok Lee
Date    : 2022/09/01
https://school.programmers.co.kr/learn/courses/30/lessons/92335
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(long long num) {
    if (num <= 1)
        return false;
    
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

string transfer(int n, int k) {
    string str = "";
        
    while (n != 0) {
        str += to_string(n % k);
        n /= k;
    }
    
    reverse(str.begin(), str.end());
    return str;
}

int solution(int n, int k) {
    int answer = 0;
    
    string str = transfer(n, k);
    string num = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            if (num != "" && isPrime(stoll(num)))
                answer++;
            num = "";
        }
        else
            num += str[i];
        
        if (i == str.length() - 1 && num != "" && isPrime(stoll(num)))
            answer++;
    }

    return answer;
}
