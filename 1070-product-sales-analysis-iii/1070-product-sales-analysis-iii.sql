
-- SELECT s1.product_id,s1.year AS first_year,s1.quantity,s1.price
-- FROM Sales s1
-- LEFT JOIN Sales s2
-- ON s1.product_id = s2.product_id
-- AND s1.year > s2.year
-- WHERE s2.product_id IS NULL;
SELECT product_id,year as first_year,quantity,price
From Sales
where(product_id,year) IN (Select product_id,MIN(year) as f_year
from Sales
group by product_id)