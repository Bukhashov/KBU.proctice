using System;

namespace Task_11
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, f;
                n = Convert.ToInt32(Console.ReadLine());
                f = (int) Factorial(n);
            
                Console.WriteLine(f);
        }

        static decimal Factorial(int n1)
        {
            if (n1 == 0)
            {
                return 1;
            }
            else
            {
                return n1 * Factorial(n1 - 1);
            }
        }
    }
}