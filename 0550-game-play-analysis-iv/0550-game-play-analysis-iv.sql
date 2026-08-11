# Write your MySQL query statement below
Select ROUND(COUNT(distinct player_id)/(SELECT COUNT(distinct player_id) from Activity),2) as fraction
FROM Activity
where(player_id,DATE_SUB(event_date,interval 1 Day)) IN
(SELECT player_id,MIN(event_date) as first_login
FROM Activity
GROUP by player_id)