select unique_id , name
from Employees e
LEFT JOIN EmployeeUNI eu
ON eu.id = e.id;