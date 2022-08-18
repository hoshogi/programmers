/*
Title   : 두 큐 합 같게 만들기
Author  : Hoseok Lee
Date    : 2022/08/18
https://school.programmers.co.kr/learn/courses/30/lessons/118667
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    deque<int> q1, q2;
    int count = 0;
    long long sum1 = 0;
    long long sum2 = 0;

    for (int i = 0; i < queue1.size(); i++) {
        q1.push_back(queue1[i]);
        q2.push_back(queue2[i]);
        sum1 += queue1[i];
        sum2 += queue2[i];
    }

    while (count <= queue1.size() * 3) {
        if (sum1 == sum2)
            return count;
        else if (sum1 > sum2) {
            int num = q1.front();
            q1.pop_front();
            q2.push_back(num);
            sum1 -= num;
            sum2 += num;
        } else {
            int num = q2.front();
            q2.pop_front();
            q1.push_back(num);
            sum1 += num;
            sum2 -= num;
        }
        count++;
    }

    return -1;
}
