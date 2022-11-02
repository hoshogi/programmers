/*
Title   : 직각삼각형 출력하기
Author  : Hoseok Lee
Date    : 2022/11/02    
https://school.programmers.co.kr/learn/courses/30/lessons/120823
https://github.com/hoshogi
*/

#include <iostream>

using namespace std;

int main(void) {
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}