/*
Title   : 소수 찾기
Author  : Hoseok Lee
Date    : 2022/07/11
https://school.programmers.co.kr/learn/courses/30/lessons/42839
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <set>
#define N 10000000

using namespace std;

int solution(string numbers) {
    bool check[N] = {true, true, false, };
    vector<char> v;
    set<int> result;
    
    for (int i = 2; i < N; i++) {
        if (!check[i])
            for (int j = 2 * i; j < N; j += i)
                check[j] = true;
    }
    
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] >= '0' && numbers[i] <= '9')
            v.push_back(numbers[i]);
    }
    
    sort (v.begin(), v.end());
    
    do {
        string num = "";
        for (auto it : v) {
            num += it;
            if (!check[stoi(num)])
                result.insert(stoi(num));
        }
    } while(next_permutation(v.begin(), v.end()));
    
    return result.size();
}
