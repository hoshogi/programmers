/*
Title   : n보다 커질 때까지 더하기
Author  : Hoseok Lee
Date    : 2023/07/27
https://school.programmers.co.kr/learn/courses/30/lessons/181884
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] numbers, int n) {
        int answer = 0;

        for (int num : numbers) {
            answer += num;
            if (answer > n)
                break;
        }
        return answer;
    }
}