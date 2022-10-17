/*
Title   : 전력망을 둘로 나누기
Author  : Hoseok Lee
Date    : 2022/10/17
https://school.programmers.co.kr/learn/courses/30/lessons/86971
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int parent[101];

int Find(int x) {
    if (parent[x] == x)
        return x;
    return Find(parent[x]);
}

void Union(int a, int b) {
    int rootA = Find(a);
    int rootB = Find(b);
    
    if (rootA < rootB)
        parent[rootB] = rootA;
    else
        parent[rootA] = rootB;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 101;
    vector<bool> check(wires.size());
    
    fill_n(check.begin(), 1, false);
    fill_n(check.begin() + 1, wires.size() - 1, true);
    
    do {
        int a = 0, b = 0;
        
        for (int i = 1; i <= n; i++)
            parent[i] = i;
        for (int i = 0; i < wires.size(); i++) {
            if (check[i])
                Union(wires[i][0], wires[i][1]);
        }
        for (int i = 1; i <= n; i++) {
            if (Find(i) == 1)
                a++;
            else
                b++;
        }
        answer = min(answer, abs(a - b));
    } while (next_permutation(check.begin(), check.end()));

    return answer;
}
