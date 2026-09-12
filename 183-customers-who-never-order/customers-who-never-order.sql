# Write your MySQL query statement below
#we need the customer who is not present in the order table so apply left exclusive join
SELECT Customers.name AS customers FROM Customers LEFT JOIN Orders ON Customers.id=Orders.Customerid WHERE Orders.Customerid IS NULL;