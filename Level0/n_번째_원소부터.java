/*
Title   : n 번째 원소부터
Author  : Hoseok Lee
Date    : 2023/05/15
https://school.programmers.co.kr/learn/courses/30/lessons/181892
https://github.com/hoshogi
*/

import java.util.*;

class Solution {
    public int[] solution(int[] num_list, int n) {
        return Arrays.copyOfRange(num_list, n - 1, num_list.length);
    }
}