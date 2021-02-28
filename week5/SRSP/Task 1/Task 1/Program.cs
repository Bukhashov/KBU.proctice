using System;

namespace Task_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("K: ");
            int K = Convert.ToInt32(Console.ReadLine());
            Console.Write("N: ");
            int N = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < N; i++)
            {
                Console.Write("K: " + K + "  ");
            }
        }
    }
}