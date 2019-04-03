USE NCR;
 
 drop table dept;
 drop table emp;
 drop table salgrade;
 drop table bonus;

 CREATE TABLE dept(
  deptno int,
  dname  nVARCHAR(14),
  loc    nVarchar(13),
  CONSTRAINT pk_dept PRIMARY KEY (deptno));

 CREATE TABLE emp(
  empno    int,
  ename    nVARCHAR(10),
  job      nVARCHAR(9),
  mgr      INT,
  hiredate DATE,
  sal      DECIMAL(7,2),
  comm     DECIMAL(7,2),
  deptno   INT,
  CONSTRAINT pk_emp PRIMARY KEY (empno),
  constraint fk_deptno foreign key (deptno) references dept(deptno)
);

CREATE TABLE salgrade(
  grade int,
  losal int,
  hisal int
);

CREATE TABLE bonus(
  ename nVARCHAR(10),
  job   nVARCHAR(9),
  sal   int,
  comm  int
);

INSERT INTO dept VALUES(10, 'ACCOUNTING', 'NEW YORK');
INSERT INTO dept VALUES(20, 'RESEARCH', 'DALLAS');
INSERT INTO dept VALUES(30, 'SALES', 'CHICAGO');
INSERT INTO dept VALUES(40, 'OPERATIONS', 'BOSTON');

INSERT INTO salgrade VALUES (1, 700, 1200);
INSERT INTO salgrade VALUES (2, 1201, 1400);
INSERT INTO salgrade VALUES (3, 1401, 2000);
INSERT INTO salgrade VALUES (4, 2001, 3000);
INSERT INTO salgrade VALUES (5, 3001, 9999);


INSERT INTO emp VALUES(
 7839, 'KING', 'PRESIDENT', null,
 convert(datetime,'1981-11-17'),
 5000, null, 10);

INSERT INTO emp VALUES(
 7698, 'BLAKE', 'MANAGER', 7839,
 ('1-5-1981'),
 2850, null, 30);

INSERT INTO emp VALUES(
 7782, 'CLARK', 'MANAGER', 7839,
 '9-6-1981',
 2450, null, 10);

INSERT INTO emp VALUES(
 7566, 'JONES', 'MANAGER', 7839,
 ('2-4-1981'),
 2975, null, 20);

INSERT INTO emp VALUES(
 7788, 'SCOTT', 'ANALYST', 7566,
('13-JUL-87'),
 3000, null, 20);

INSERT INTO emp VALUES(
 7902, 'FORD', 'ANALYST', 7566,
('3-12-1981'),
 3000, null, 20 );

INSERT INTO emp VALUES(
 7369, 'SMITH', 'CLERK', 7902,
 convert(datetime,'1980-12-17'),
 800, null, 20 );

INSERT INTO emp VALUES(
 7499, 'ALLEN', 'SALESMAN', 7698,
 ('1981-2-20'),
 1600, 300, 30);

INSERT INTO emp VALUES(
 7521, 'WARD', 'SALESMAN', 7698,
 ('1981-2-22'),
 1250, 500, 30 );

INSERT INTO emp VALUES(
 7654, 'MARTIN', 'SALESMAN', 7698,
 ('1981-9-28'),
 1250, 1400, 30 );

INSERT INTO emp VALUES(
 7844, 'TURNER', 'SALESMAN', 7698,
 ('1981-8-9'),
 1500, 0, 30);

INSERT INTO emp VALUES(
 7876, 'ADAMS', 'CLERK', 7788,
 ('13-JUL-87'),
 1100, null, 20 );

INSERT INTO emp VALUES(
 7900, 'JAMES', 'CLERK', 7698,
 ('3-12-1981'),
 950, null, 30 );

INSERT INTO emp VALUES(
 7934, 'MILLER', 'CLERK', 7782,
 ('1982-1-23'),
 1300, null, 10 );





/*Query 1*/
select *
from emp
where sal>1000 and sal<2000;

/*Query 2*/
select dept.deptno,dname
from dept,emp
where emp.deptno=dept.deptno
order by dname;

/*Query 3*/
select distinct job
from emp;

/*Query 4*/
select * 
from emp
where deptno in(10,20)
order by ename;

/*Query 5*/
select ename,job
from emp
where deptno = 20;

/*Query 6*/
select ename
from emp
where ename like '%th%' or ename like '%ll%'; 

/*Query 7*/
select * 
from emp
where mgr is not null;

/*Query 8*/
select ename, sal+isnull(comm,0)
from emp;

/*Query 9*/


/*Query 10*/

/*Query 11*/

/*Query 12*/
select job,min(sal) as 'min',max(sal) as 'max'
from emp
group by job;

/*Query 13*/
select count(job)
from emp
where job = 'MANAGER';

/*Query 14*/
select job,avg(sal) as 'Average',sum(isNull(sal,0))+sum(isNull(comm,0)) as 'Total'
from emp
group by job;

/*Query 15*/
select max(sal) - min(sal) as 'Difference'
from emp;

/*Query 16*/
select deptno,count(*)
from emp
group by deptno
having count(deptno)>3;

/*Query 17*/
select empno,count(*)
from emp
group by empno;

/*Query 18*/

/*Query 19*/

/*Query 20*/
/*Query 21*/
/*Query 22*/

/*Query 23*/
select ename
from emp,dept
where dept.loc = 'DALLAS';

/*Query 24*/

/*Query 25*/
select * 
from emp
where 12*sal = 36000 or job = 'CLERK';

/*Query 26*/
select deptno,dname
from dept
where deptno not in (select deptno from emp);

/*Query 27*/


/*Query 28*/
select * from emp;
/*Query 29*/

