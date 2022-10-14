/*
Title   : 중복 제거하기
Author  : Hoseok Lee
Date    : 2022/10/14
https://school.programmers.co.kr/learn/courses/30/lessons/59408
https://github.com/hoshogi
*/

SELECT COUNT(DISTINCT NAME) 
FROM ANIMAL_INS
WHERE NAME IS NOT NULL;