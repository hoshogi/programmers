/*
Title   : 원소들의 곱과 합
Author  : Hoseok Lee
Date    : 2023/04/24
https://school.programmers.co.kr/learn/courses/30/lessons/181929
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] num_list) {
        int sum = 0, mul = 1;
        
        for (int num : num_list) {
            sum += num;
            mul *= num;
        }
        return mul > sum * sum ? 0 : 1;
    }
}