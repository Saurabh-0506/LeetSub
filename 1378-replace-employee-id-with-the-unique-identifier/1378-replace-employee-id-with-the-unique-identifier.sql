# Write your MySQL query statement below
SELECT unique_id,name
FROM Employees as e
left join EmployeeUNI as ed
on 
e.id = ed.id;
