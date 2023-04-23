/*
Title   : 배열 만들기 1
Author  : Hoseok Lee
Date    : 2023/04/23
https://school.programmers.co.kr/learn/courses/30/lessons/181901
https://github.com/hoshogi
*/

class Solution {
    public int[] solution(int n, int k) {
        int[] answer = new int[n / k];
        
        for (int i = k; i <= n; i += k) 
            answer[i / k - 1] = i;
        return answer;
    }
}