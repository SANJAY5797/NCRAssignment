using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary1
{
    public class A
    {
        public void print()
        {
            Console.WriteLine("Hello from class A");
        }
    }
    public partial class PartialClassSample
    {
       // partial void method()
        //{
        //    int a = 1;
        //}//Partial is always private
        public void method()
        {
            Console.WriteLine("Hello");
        }
    }
}
