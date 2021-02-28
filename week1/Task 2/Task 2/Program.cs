using System;

namespace Task_2
{
    class Program
    {
        static void Main(string[] args)
        {
            double a, b, c, S;
            Console.WriteLine("a: ");
            a = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("b: ");
            b = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("c: ");
            c = Convert.ToDouble(Console.ReadLine());

            S = 2 * (a + b) * c;
            
            Console.WriteLine("S: " + Convert.ToString(S));
        }
    }
}
