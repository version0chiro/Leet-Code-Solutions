# Write your MySQL query statement below
SELECT a.name as Employee 
FROM employee a, employee b
# where salary a,salary b
where a.managerId = b.id and a.salary>b.salary