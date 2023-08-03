/*
Title   : 5명씩
Author  : Hoseok Lee
Date    : 2023/08/02
https://school.programmers.co.kr/learn/courses/30/lessons/181886
https://github.com/hoshogi
*/

import java.util.*;

class Solution {
    public String[] solution(String[] names) {
        List<String> answer = new ArrayList<>();
        for (int i = 0; i < names.length; i += 5) 
            answer.add(names[i]);
        return answer.toArray(new String[answer.size()]);
    }
}