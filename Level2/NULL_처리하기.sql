/*
Title   : NULL 처리하기
Author  : Hoseok Lee
Date    : 2022/10/15
https://school.programmers.co.kr/learn/courses/30/lessons/59410
https://github.com/hoshogi
*/

SELECT ANIMAL_TYPE, IFNULL(NAME, 'No name'), SEX_UPON_INTAKE
FROM ANIMAL_INS
ORDER BY ANIMAL_ID ASC;