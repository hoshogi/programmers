/*
Title   : 지페 접기
Author  : Hoseok Lee
Date    : 2024/09/16

https://school.programmers.co.kr/learn/courses/30/lessons/340199
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int minBill, maxBill;
void swapBill();

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    int minWallet = min(wallet[0], wallet[1]);
    int maxWallet = max(wallet[0], wallet[1]);
    minBill = min(bill[0], bill[1]);
    maxBill = max(bill[0], bill[1]);
    
    while (maxBill > maxWallet || minBill > minWallet) {
        answer++;
        maxBill /= 2;
        swapBill();
    }
    return answer;
}

void swapBill() {
    if (minBill > maxBill) {
        swap(minBill, maxBill);
    }
}
