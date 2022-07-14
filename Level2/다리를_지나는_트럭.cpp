/*
Title   : 다리를 지나는 트럭
Author  : Hoseok Lee
Date    : 2022/07/14
https://school.programmers.co.kr/learn/courses/30/lessons/42583
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int truck = 0;
    int bridge_weight = 0;
    queue<pair<int, int> > q;

    while (true) {
        answer++;
        if (q.empty()) {
            q.push({answer, truck_weights[truck]});
            bridge_weight = truck_weights[truck];
            truck++;
        }
        else {
            if (answer - q.front().first == bridge_length) {
                bridge_weight -= q.front().second;
                q.pop();
            }

            if (bridge_weight + truck_weights[truck] <= weight) {
                q.push({answer, truck_weights[truck]});
                bridge_weight += truck_weights[truck];
                truck++;
            }
        }

        if (truck == truck_weights.size()) {
            answer = q.back().first + bridge_length;
            break;
        }
    }

    return answer;
}
