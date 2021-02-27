using System;

namespace Task_9
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("N: ");
            double N = Convert.ToDouble(Console.ReadLine());
            double K = 0;

            while (K * K <= N)
            {
                K++;
            }

            K -= 1;
            Console.WriteLine("k: " + K);
        }
    }
}