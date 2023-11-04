/*
Title   : 조건에 맞게 수열 변환하기 3
Author  : Hoseok Lee
Date    : 2023/11/05
https://school.programmers.co.kr/learn/courses/30/lessons/181835
https://github.com/hoshogi
*/

import java.util.stream.IntStream;

class Solution {
    public int[] solution(int[] arr, int k) {
        if (k % 2 == 0) {
            return IntStream.of(arr).map(i -> i + k).toArray();
        }
        return IntStream.of(arr).map(i -> i * k).toArray();
    }
}