select b.id As id
from Weather a
inner join weather b
ON DATEDIFF(b.recordDate,a.recordDate) = 1
and b.temperature > a.temperature;