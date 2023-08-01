/*
Title   : 접미사인지 확인하기
Author  : Hoseok Lee
Date    : 2023/08/01
https://school.programmers.co.kr/learn/courses/30/lessons/181908
https://github.com/hoshogi
*/

class Solution {
    public int solution(String my_string, String is_suffix) {
        return my_string.endsWith(is_suffix) ? 1 : 0;
    }
}