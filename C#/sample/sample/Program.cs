using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace sample
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World");
            SampleClassLibrary.Class1.printToConsole();
            Console.WriteLine("Max value = {0}", int.MaxValue);
            Console.WriteLine("Min value = {0}", int.MinValue);
            Console.WriteLine("True value = {0}", bool.TrueString);
            Console.WriteLine("False value = {0}", bool.FalseString);
            Console.WriteLine("Max float value = {0}", float.MaxValue);
            int? nullable_var = null;
            Console.WriteLine(nullable_var);
            int[] arr = new int[3];
            arr[0] = 1;
            arr[1] = 2;
            arr[2] = 3;
            foreach(int index in arr)
            {
                Console.WriteLine(index);
            }
            int condition_variable = 4 > 6 ? 2 : 8;
            Console.WriteLine(condition_variable);
            int intVariable;
            float floatVariable = 30.45f;
            intVariable = (int)floatVariable;
            Console.WriteLine(intVariable);
            Point p = new Point(42,33);
            p.print_point();
            int outVar;
            int sum = AddSum(12, 42, out outVar);
            int sum2 = param_example(2, 44, 55, 6, 78); 
            Console.WriteLine("{0}\n{1}", sum, outVar);
            Console.WriteLine("\n{0}\n", sum2);
            int sum3 = def_param(5, z: 859);
            Console.WriteLine("{0}\n", sum3);
            Console.Read();
        }
        void add()
        {
            Console.WriteLine("Hi");
        }
        public static int AddSum(int x,int y, out int outVar)
        {
            outVar = x + x + y;
            return x + y;
        }
        public static int param_example(int x,int y, params int[] valueset)
        {
            int sum = 0;
            if(valueset != null)
            {
                foreach (int counter in valueset)
                { 
                    sum +=counter;
                }
            }
            return sum + x+y;
        }
       public static int def_param(int x,int y=0,int z=0)
        {
            return x + y + z;
        }
    }
   public class Point
   {
       public int x,y;
       public Point(int input1,int input2)
       {
           this.x = input1;
           this.y = input2;
       }
       public void print_point()
       {
           Console.WriteLine(this.x);
           Console.WriteLine(this.y);
       }
   }
}
