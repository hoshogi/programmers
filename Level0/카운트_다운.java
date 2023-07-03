/*
Title   : 카운트 다운
Author  : Hoseok Lee
Date    : 2023/07/03
https://school.programmers.co.kr/learn/courses/30/lessons/181899
https://github.com/hoshogi
*/

class Solution {
    public int[] solution(int start, int end) {
        int[] answer = new int[start - end + 1];
        
        for (int i = 0; i < start - end + 1; i++)
            answer[i] = start - i;
        return answer;
    }
}