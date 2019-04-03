using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    public class Employee
    {
        public string fname, lname, email;
        public void print_name()
        {
            Console.WriteLine("{0} {1}",fname,lname);
    
        }
    }
    public class FTE: Employee
    {
        int y_sal;
        public FTE()
        {
            y_sal = 10000;
        }
        public new void print_name() 
        {
            Console.WriteLine("{0} {1} - FTE", fname, lname);

        }
    }
    public class Contract : Employee
    {
        int m_sal;
        public Contract()
        {
            m_sal = 1000;
        }
        public void print_name()
        {
            Console.WriteLine("{0} {1} - Contract employee", fname, lname);

        }
    }
    public class Parent
    {
        public Parent(string s)
        {
            Console.WriteLine("Parent param Constructor called from {0}", s);
        }
        public Parent()
        {
            Console.WriteLine("Parent Constructor called ");
        }
    }
    public class Child : Parent
    {
        public Child():base("Child class")
        {
            Console.WriteLine("Child Constructor called ");
        }
    }
    class TimePeriod
    {
        private double _seconds;
        public double hours
        {
            get
            {
                return _seconds/3600;
            }
            set
            {
                if(value<0||value>24)
                {
                    Console.WriteLine("Not Valid");
                }
                else
                {
                    _seconds = 4000; 
                }
            }
        }

    }

    class Program
    {
        static void Main(string[] args)
        {
            Employee e = new FTE();
            e.fname = "Pratik";
            e.lname = "Saxena";
            e.print_name();
            FTE f = new FTE();
            f.fname = "Hyder";
            f.lname = "Ali";
            f.print_name();
            Contract c = new Contract();
            c.fname = "Hi";
            c.lname = "Hello";
            c.print_name();
            Child ch = new Child();
            TimePeriod t = new TimePeriod();
            t.hours = 23;
            Console.WriteLine(t.hours);
            Console.Read();
        }
    }
}
