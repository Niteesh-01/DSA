# Write your MySQL query statement below
SELECT customer_number from Orders Group BY customer_number
Order by count(customer_number) DESC limit 1;