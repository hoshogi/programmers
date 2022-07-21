/*
Title   : 디스크 컨트롤러
Author  : Hoseok Lee
Date    : 2022/07/21
https://school.programmers.co.kr/learn/courses/30/lessons/42627
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<vector<int>> jobs) {
    int answer = 0;
    int count = 0;
    int operate = 0;
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    
    sort (jobs.begin(), jobs.end());
    for (int i = 0; ; i++) {
        while (count != jobs.size() && jobs[count][0] <= i) {
            pq.push({jobs[count][1], jobs[count][0]});
            count++;
        }
        
        if (!pq.empty()) {
            i += pq.top().first - 1;
            
            answer += i + 1 - pq.top().second;
            pq.pop();
            operate++;
        }
        
        if (operate == jobs.size())
            break;
    }
    
    return answer / count;
}
