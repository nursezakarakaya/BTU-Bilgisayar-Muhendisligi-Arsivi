-- ALISTIRMA 1
SELECT
    S.student_id,
    S.student_name,
    C.course_id,
    C.course_name
FROM students AS S
LEFT JOIN student_courses AS SC ON S.student_id = SC.student_id
LEFT JOIN courses AS C ON SC.course_id = C.course_id;


-- ALISTIRMA 2
SELECT
    S.student_id,
    S.student_name,
    C.course_id,
    C.course_name
FROM students AS S
LEFT JOIN student_courses AS SC ON S.student_id = SC.student_id
LEFT JOIN courses AS C ON SC.course_id = C.course_id

UNION -- iki tablodaki aynı satırları kaldırır aynı zamanda

SELECT
    S.student_id,
    S.student_name,
    C.course_id,
    C.course_name
FROM courses AS C -- bu kez derslerin silinmemesi için önce courses diyip bu tabloyu öncekiyle birleştirdik.
LEFT JOIN student_courses AS SC ON C.course_id = SC.course_id
LEFT JOIN students AS S ON SC.student_id = S.student_id;