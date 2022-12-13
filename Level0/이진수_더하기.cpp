/*
Title   : 이진수 더하기
Author  : Hoseok Lee
Date    : 2022/12/13
https://school.programmers.co.kr/learn/courses/30/lessons/120885
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int toDecimal(string bin) {
    int num = 0, mul = 1;
    
    reverse(bin.begin(), bin.end());
    for (int i = 0; i < bin.length(); i++) {
        num += (bin[i] - '0') * mul;
        mul *= 2;
    }
    return num;
}

string toBinary(int num) {
    string bin = "";
    
    if (num == 0)
        return "0";
    
    while (num != 0) {
        bin += num % 2 + '0';
        num /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

string solution(string bin1, string bin2) {
    int num1 = toDecimal(bin1);
    int num2 = toDecimal(bin2);
    return toBinary(num1 + num2);
}