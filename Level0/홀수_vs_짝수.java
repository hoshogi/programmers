/*
Title   : 홀수 vs 짝수
Author  : Hoseok Lee
Date    : 2024/01/25
https://school.programmers.co.kr/learn/courses/30/lessons/181887
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] num_list) {
        int odd = 0, even = 0;
        
        for (int i = 0; i < num_list.length; i++) {
            if (i % 2 == 0) 
                odd += num_list[i];
            else
                even += num_list[i];
        }
        return odd > even ? odd : even;
    }
}