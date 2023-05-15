/*
Title   : 길이에 따른 연산
Author  : Hoseok Lee
Date    : 2023/05/15
https://school.programmers.co.kr/learn/courses/30/lessons/181879
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] num_list) {
        if (num_list.length >= 11) {
            int sum = 0;
        
            for (int num : num_list)
                sum += num;
            return sum;
        }
        
        int mul = 1;
        
        for (int num : num_list)
            mul *= num;
        return mul;
    }
}