/*
Title   : 0 떼기
Author  : Hoseok Lee
Date    : 2023/07/25
https://school.programmers.co.kr/learn/courses/30/lessons/181847
https://github.com/hoshogi
*/

class Solution {
    public String solution(String n_str) {
        int index = 0;
        
        for (int i = 0; i < n_str.length(); i++) {
            if (n_str.charAt(i) != '0') {
                index = i;
                break;
            }
        }
        return n_str.substring(index);    
    }
}