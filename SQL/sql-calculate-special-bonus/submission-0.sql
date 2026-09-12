-- Write your query below
SELECT employee_id,
CASE 
    WHEN e.name NOT LIKE 'M%' AND e.employee_id % 2 = 1 THEN e.salary
    else 0
END AS bonus
FROM employees e
ORDER BY employee_id;