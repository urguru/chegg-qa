1.
select sname
from supplier
where city="Mumbai";

2.
select s.sname,p.pname
from supplier s,part p,suppliers ss
where s.sid=ss.sid and ss.pid=p.pid;

3.
select s.sname
from supplier s,suppliers ss
where s.sid=ss.sid
group by ss.pid
having count(sid)=2;

4.
select p.pname
from part p,suppliers s 
where p.pid=s.pid
group by s.sid
having count(*)=(select count(*) from supplier)

5.
select s.sname,ss.price
from part p,suppliers ss,supplier s
where ss.pid=p.pid and p.pname="wheel" and s.sid=ss.sid and ss.price=(select min(price) from suppliers ss,part p where ss.pid=p.pid and p.pname="wheel");

6.
select s.city,avg(ss.price)
from part p,suppliers ss,supplier s
where s.sid=ss.sid and ss.pid=p.pid and p.pname="wheel"
group by s.city;

7.
select p.pname
from part p,suppliers ss
where p.pid=ss.pid
group by p.pid
order by count(ss.sid) DESC
limit 1

8.
select s.sname,avg(ss.pid) as cost
from supplier s,suppliers ss
where s.sid=ss.sid and cost>=100
group by ss.sid;

9.
select s.sname,p.color,count(p.color) as pcol
from supplier s,part p,suppiers ss
where s.sid=ss.sid and ss.pid=p.pid
group by s.sid
order by pcol DESC
limit 1;

10.

select s.sname,ss.price from
supplier s,suppliers ss
where s.sid=ss.sid and s.city=(select city
from suppliers ss,supplier s
where pid=(select pid from part where pname="wheel") and s.sid=ss.sid
group by city
order by avg(price) limit 1)
and ss.pid=(select pid from part where pname="wheel")

