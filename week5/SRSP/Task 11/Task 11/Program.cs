using System;

namespace Task_11
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("N: ");
            int N = Convert.ToInt32(Console.ReadLine());
            int J = 0;

            for (int i = 1; i <= N; i++)
            {
                if (i % 2 == 1)
                {
                    J += i;
                }
            }
            Console.WriteLine("J: " + J);
        }
    }
}