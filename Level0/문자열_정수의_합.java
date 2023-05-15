/*
Title   : 문자열 정수의 합
Author  : Hoseok Lee
Date    : 2023/05/15
https://school.programmers.co.kr/learn/courses/30/lessons/181849
https://github.com/hoshogi
*/

class Solution {
    public int solution(String num_str) {
        int answer = 0;

        for (int i = 0; i < num_str.length(); i++) 
            answer += num_str.charAt(i) - '0';
        return answer;
    }
}