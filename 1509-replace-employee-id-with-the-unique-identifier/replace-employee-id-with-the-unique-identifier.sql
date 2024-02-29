select eu.unique_id , e.name
from Employees e
LEFT JOIN EmployeeUNI eu
ON eu.id = e.id;