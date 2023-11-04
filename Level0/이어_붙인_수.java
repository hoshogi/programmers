/*
Title   : 이어 붙인 수
Author  : Hoseok Lee
Date    : 2023/11/05
https://school.programmers.co.kr/learn/courses/30/lessons/181928
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] num_list) {
        String even = "";
        String odd = "";
        
        for (int num : num_list) {
            if (num % 2 == 0)
                even += num;
            else 
                odd += num;
        }
        return Integer.parseInt(even) + Integer.parseInt(odd);
    }
}