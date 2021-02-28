using System;

namespace Task_11
{
    class Program
    {
        static void Main(string[] args)
        { 
            Console.Write("N: ");
            double N = Convert.ToDouble(Console.ReadLine());
            double K = 0, S = 3;
            
            while (S < N)
            {
                S *= 3;
                K++;
            }
            Console.WriteLine("k: " + K);
        }
    }
}