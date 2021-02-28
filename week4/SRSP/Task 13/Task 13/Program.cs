using System;

namespace Task_13
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("A: ");
            double A = Convert.ToDouble(Console.ReadLine());
            double S = 0, K = 1;

            while (S < A)
            {
                S += K;
                K++;
            }
            K--;
            Console.WriteLine("K: " + K + "\nSumma: " + S);
        }
    }
}