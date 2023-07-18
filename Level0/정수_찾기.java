/*
Title   : 정수 찾기
Author  : Hoseok Lee
Date    : 2023/07/18
https://school.programmers.co.kr/learn/courses/30/lessons/181840
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] num_list, int n) {
        for (int num : num_list) {
            if (num == n)
                return 1;
        }
        return 0;
    }
}