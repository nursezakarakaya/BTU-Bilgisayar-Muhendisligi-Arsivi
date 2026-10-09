--ALISTIRMA 1
UPDATE Customers 
SET CustomerName = 'Around the Horn'
WHERE Country = 'Mexico';

--ALISTIRMA 2
UPDATE Customers
SET CustomerName = 'Satyam',
    Country = 'USA'
WHERE CustomerID = 1;

--ALISTIRMA 3
--3.1
DELETE FROM gfg_employee
WHERE name = 'Rithvik';

--3.2
DELETE FROM gfg_employee
WHERE department = 'Development';

--3.3
DELETE FROM gfg_employee;