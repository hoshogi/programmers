/*
Title   : 이름에 el이 들어가는 동물찾기
Author  : Hoseok Lee
Date    : 2022/10/15
https://school.programmers.co.kr/learn/courses/30/lessons/59047
https://github.com/hoshogi
*/

SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE ANIMAL_TYPE = 'Dog'AND NAME LIKE '%EL%'
ORDER BY NAME ASC;