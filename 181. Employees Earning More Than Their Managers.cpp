# Accepted, Success
# Runtime: 423 ms, faster than 29.96% of MySQL online submissions 
# Memory Usage: 0B, less than 100.00% of MySQL online submissions
SELECT e.name as Employee FROM Employee e JOIN Employee m
ON e.managerId = m.id
AND e.salary > m.salary