# Write your MySQL query statement below
#here we need the all data of first table and only matching data from the second table so here we need to perform left outer join

SELECT person.firstname,person.lastname,address.city,address.state FROM person LEFT JOIN address ON person.personid=address.personid;
 