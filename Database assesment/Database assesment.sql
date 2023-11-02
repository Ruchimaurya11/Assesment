create database assesment;
use assesment;
create table Noble_win(
year int,
subject varchar(25),
winner varchar(20),
counrty varchar(15),
catagary varchar(20)
);
insert into Noble_win values
(1970,"Physics","Hannes Alfven","Sweden","Scientist"),
(1970,"Physics","Lovis Neel","France","Scientist"),
(1970,"Chemistry","Luis Federico Leloir","France","Scientist"),
(1970,"Physiology","Ulf Von Euler","Sweden","Scientist"),
(1970,"Physiology","Bernard Katz","Germany","Scientist"),
(1970,"Literature","Aleksandr Sol","Russia","Linguist"),
(1970,"Economics","Paul samuelson","USA","Economist"),
(1970,"Physiology","Julius Axelrod","USA","Scientist"),
(1971,"Physics","dennis Gabor","Hungary","Scientist"),
(1971,"Chemistry","Gerhard Herzberg","Germany","Scientist"),
(1971,"Peace","Willy Brandt","Germany","Chancellor"),
(1971,"Literature","Pablo Neruda","Chile","Linguist"),
(1971,"Economics","Simon Kuznets","Russia","Economist"),
(1978,"Peace","Anwar al-sadat","Egypt","President"),
(1978,"Peace","Menachem Begin","Israel","Prime Minister"),
(1987,"Chemistry","Donald J.Crem","USA","Scientist"),
(1987,"Chemistry","Jean-Marie Lehn","France","Scientist"),
(1987,"Physiology","Susumu Tonegawa","Japan","Scientist"),
(1994,"Economics","Reinhard Selten","Germany","Economist"),
(1994,"Peace","Yitzhak Rabin","Israel","Prime Minister"),
(1987,"Physics","Johannes  Bed","Germany","Scientist"),
(1987,"Literature","Joseph Brodsky","Russia","Linguist"),
(1987,"Economics","Robert Solow","USA","Economist"),
(1994,"Literature","Kenzaburo Oe","Japan","Linguist");

select * from Noble_win;
use assesment;
-- ● Write sql query to find the nobel prize winners of the year 1970. Return year,subject and winner
select year,subject,winner
from Noble_win
where year=1970;

-- ● Write sql query to find the nobel prize winners in chemistry between the years 1965 
--   and 1975. Begin and end values are includedReturn year, subject, winner and country
select year,subject,winner,counrty
from Noble_win
where subject="chemistry"
and year>=1965 and year<=1975;

-- ● Write sql query to retrieve the details of the winners whose first name matches with 
--  the string ‘Louis’. Return year,subject,winner,country
select * from Noble_win
where winner LIKE  "louis Neel";


-- ● Write sql query to find Nobel prize winners for the subject that does not begin with 
--  the letter ‘P’. Order the result by year, descending and winner in ascending
select * from Nobel_win 
where subject NOT LIKE "p"
order by year desc,winner;

-- ● Write sql query to find the details of 1970 Nobel prize winners. Order the result by 
--  subject, ascending except for ‘Chemistry’ and ‘Economics’ which will come at the 
--  end of the result set. Return year, subject, winner , country and category.
select * from Noble_win 
where year=1970
order by case
when subject IN ("Economics","Chemistry") then 1
else 0
end asc,
subject,
winner;




