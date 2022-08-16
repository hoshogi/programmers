/*
Title   : 이진 변환 반복하기
Author  : Hoseok Lee
Date    : 2022/08/17
https://school.programmers.co.kr/learn/courses/30/lessons/70129
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string toBinary(int n) {
    string binary = "";
    
    while (n != 0) {
        binary += to_string(n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

vector<int> solution(string s) {
    vector<int> answer;
    int count = 0;
    int zero = 0;
    
    while (s != "1") {
        count++;
        string temp = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0')
                zero++;
            else
                temp += '1';
        }
        
        s = toBinary(temp.length());
    }
    
    answer.push_back(count);
    answer.push_back(zero);
    return answer;
}
