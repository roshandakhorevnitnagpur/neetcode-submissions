-- Write your query below
select s.seller_name 
from seller s
where s.seller_id NOT IN (
    select seller_id 
    from orders 
    where EXTRACT(YEAR FROM sale_date) = 2020
)
order by s.seller_name;