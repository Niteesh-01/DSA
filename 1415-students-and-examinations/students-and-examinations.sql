# Write your MySQL query statement below

-- Select s.student_id,s.student_name,e.subject_name,count(e.subject_name) as attended_exams From Students s Left Join Examinations e ON s.student_id=e.student_id left join Subjects a ON e.subject_name=a.subject_name
-- Order by s.student_id AND a.subject_name;

SELECT
    s.student_id,
    s.student_name,
    sub.subject_name,
    COUNT(e.subject_name) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
    ON s.student_id = e.student_id
    AND sub.subject_name = e.subject_name
GROUP BY
    s.student_id,
    s.student_name,
    sub.subject_name
ORDER BY
    s.student_id,
    sub.subject_name;