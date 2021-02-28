using System;

namespace Task_13
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("A: ");
            int A = Convert.ToInt32(Console.ReadLine());
            Console.Write("N: ");
            int N = Convert.ToInt32(Console.ReadLine());
            int J = 1;

            for (int i = 1; i <= N; i++)
            {
                J *= A;
            }
            Console.WriteLine("J: " + J);
        }
    }
}