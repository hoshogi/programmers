/*
Title   : 카카오프렌즈 컬러링북
Author  : Hoseok Lee
Date    : 2022/08/25
https://school.programmers.co.kr/learn/courses/30/lessons/1829
https://github.com/hoshogi
*/

#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int bfs(int m, int n, bool visited[100][100], vector<vector<int>> picture) {
    queue<pair<int, int> > q;
    visited[m][n] = true;
    q.push({m, n});
    int color = picture[m][n];
    int area = 1;
    
    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempY = y + dy[i];
            int tempX = x + dx[i];
            
            if (!(tempY >= 0 && tempY < picture.size() && tempX >= 0 && tempX < picture[0].size()))
                continue;
            
            if (!visited[tempY][tempX] && picture[tempY][tempX] == color) {
                visited[tempY][tempX] = true;
                q.push({tempY, tempX});
                area++;
            }
        }
    }
    return area;
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    bool visited[100][100] = {false, };
    
    for (int i = 0; i < picture.size(); i++) {
        for (int j = 0; j < picture[0].size(); j++) {
            if (picture[i][j] != 0 && !visited[i][j]) {
                number_of_area++;
                max_size_of_one_area = max(max_size_of_one_area, bfs(i, j, visited, picture));
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
