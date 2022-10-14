/*
Title   : 어린 동물 찾기
Author  : Hoseok Lee
Date    : 2022/10/14
https://school.programmers.co.kr/learn/courses/30/lessons/59037
https://github.com/hoshogi
*/

SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE NOT INTAKE_CONDITION = 'Aged';