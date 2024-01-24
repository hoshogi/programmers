/*
Title   : 뒤에서 5등까지
Author  : Hoseok Lee
Date    : 2024/01/24
https://school.programmers.co.kr/learn/courses/30/lessons/181853
https://github.com/hoshogi
*/

import java.util.*;

class Solution {
    public int[] solution(int[] num_list) {
        Arrays.sort(num_list);
        return Arrays.copyOf(num_list, 5);
    }
}