/*
Title   : 아픈 동물 찾기
Author  : Hoseok Lee
Date    : 2022/10/14
https://school.programmers.co.kr/learn/courses/30/lessons/59036
https://github.com/hoshogi
*/

SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE INTAKE_CONDITION = 'Sick';