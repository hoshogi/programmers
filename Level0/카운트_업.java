/*
Title   : 카운트 업
Author  : Hoseok Lee
Date    : 2023/04/22
https://school.programmers.co.kr/learn/courses/30/lessons/181920
https://github.com/hoshogi
*/

class Solution {
    public int[] solution(int start, int end) {
        int[] answer = new int[end - start + 1];
        
        for (int i = 0; i < end - start + 1; i++)
            answer[i] = start + i;
        return answer;
    }
}