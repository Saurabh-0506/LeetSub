# Write your MySQL query statement below
SELECT v.customer_id,count(customer_id) as count_no_trans
From Visits as v
left join Transactions as t
on v.visit_id = t.visit_id
where t.visit_id is NULL 
GROUP BY v.customer_id;