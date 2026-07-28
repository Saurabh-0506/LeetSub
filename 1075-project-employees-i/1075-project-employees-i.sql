# Write your MySQL query statement below
SELECT project_id,ROUND(AVG(e.experience_years), 2) AS average_years
from Project P
JOIN Employee e
on P.employee_id = e.employee_id
GROUP BY P.project_id;