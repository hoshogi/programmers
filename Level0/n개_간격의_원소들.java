/*
Title   : n개 간격의 원소들
Author  : Hoseok Lee
Date    : 2023/08/08
https://school.programmers.co.kr/learn/courses/30/lessons/181888
https://github.com/hoshogi
*/

class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] answer = new int[(num_list.length - 1) / n + 1];
        
        for (int i = 0; i < num_list.length; i += n)
            answer[i / n] = num_list[i]; 
        return answer;
    }
}