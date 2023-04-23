/*
Title   : 가까운 1 찾기
Author  : Hoseok Lee
Date    : 2023/04/23
https://school.programmers.co.kr/learn/courses/30/lessons/181898
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] arr, int idx) {
        for (int i = idx; i < arr.length; i++) {
            if (arr[i] == 1)
                return i;
        }
        return -1;
    }
}