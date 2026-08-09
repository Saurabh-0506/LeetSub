# Write your MySQL query statement below
SELECT S.user_id,ROUND(SUM(CASE WHEN action = 'confirmed' then 1 else 0 end)/COUNT(*),2) as confirmation_rate 
from Signups as S
LEFT JOIN Confirmations as C
on S.user_id = C.user_id
GROUP by user_id;