# Write your MySQL query statement below

-- Select v.customer_id, count(v.visit_id where t.visit_id IS NULL)
-- From Visits v Left join Transactions t
-- On v.visit_id=t.visit_id
-- Where t.visit_id=NULL
-- Order by ASC(count) ;


SELECT v.customer_id,
       COUNT(v.visit_id) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.visit_id IS NULL
GROUP BY v.customer_id;