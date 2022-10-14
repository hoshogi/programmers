/*
Title   : 상위 n개 레코드
Author  : Hoseok Lee
Date    : 2022/10/14
https://school.programmers.co.kr/learn/courses/30/lessons/59405
https://github.com/hoshogi
*/

SELECT NAME
FROM ANIMAL_INS
ORDER BY DATETIME ASC
LIMIT 1;

/*
SELECT NAME
FROM ANIMAL_INS
WHERE DATETIME = (SELECT MIN(DATETIME)
                  FROM ANIMAL_INS);
*/