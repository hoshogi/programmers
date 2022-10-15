/*
Title   : 동명 동물 수 찾기
Author  : Hoseok Lee
Date    : 2022/10/15
https://school.programmers.co.kr/learn/courses/30/lessons/59041
https://github.com/hoshogi
*/

SELECT NAME, COUNT(*) AS COUNT
FROM ANIMAL_INS
GROUP BY NAME HAVING COUNT(*) >= 2
ORDER BY NAME ASC;