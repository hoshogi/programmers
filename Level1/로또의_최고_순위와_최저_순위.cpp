/*
Title   : 로또의 최고 순위와 최저 순위
Author  : Hoseok Lee
Date    : 2022/07/04
https://programmers.co.kr/learn/courses/30/lessons/77484
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Rank(int right) {
    if (right >= 2)
        return 7 - right;
    return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero = 0;
    int right = 0;
    
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    for (auto it : lottos) {
        if (it == 0)
            zero++;
        else if (binary_search(win_nums.begin(), win_nums.end(), it))
            right++;
    }
    
    answer.push_back(Rank(right + zero));
    answer.push_back(Rank(right));
    return answer;
}
