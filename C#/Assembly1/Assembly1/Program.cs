using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Par = Assembly1.PartialClassSample;

namespace Assembly1
{
    class Program
    {
        public delegate void DelegateHelper
        static void Main(string[] args)
        {
            Par p = new Par();
            
            p.print();
            try
            {
                Console.WriteLine("Enter First Number : ");
                string a = Console.ReadLine();
                Console.WriteLine("Enter Second number : ");
                string b = Console.ReadLine();
                int third = 0;
                int c = int.TryParse(a, out third)/ Convert.ToInt32(b);
                Console.WriteLine(c.ToString());
            }
            catch(FormatException ex)
            {
                Console.WriteLine(ex.Message);
                throw new Exception("Inner Exception", ex);
            }
            catch (DivideByZeroException ex)
            {
                Console.WriteLine(ex.Message);
                throw new Exception("Inner Exception", ex);
            }
            catch (OverflowException ex)
            {
                Console.WriteLine(ex.Message);
                throw new Exception("Inner Exception", ex);
            }
            Console.Read();
        }
    }
    public partial class PartialClassSample
    {
        private int ID;
        private string name;
        partial void method();//Partial is always private
        public void print()
        {
            method();
        }
    }
}
