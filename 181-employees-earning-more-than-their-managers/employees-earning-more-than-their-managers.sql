# Write your MySQL query statement below
select name as employee from Employee as e 
where salary> (select salary from employee as m where e.managerid = m.id )