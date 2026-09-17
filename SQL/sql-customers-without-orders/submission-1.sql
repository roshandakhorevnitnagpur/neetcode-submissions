-- -- Write your query below
-- SELECT c.name FROM customers c LEFT JOIN orders o 
-- ON c.id = o.customer_id
-- WHERE o.customer_id IS NULL


-- SELECT name 
-- FROM customers 
-- WHERE id NOT IN (SELECT customer_id FROM orders)

SELECT name FROM Customers c 
WHERE NOT EXISTS(
    SELECT 1 FROM orders o
    WHERE o.customer_id = c.id
);