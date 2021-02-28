using System;

namespace Task_9
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("A > B \nA: ");
            int A = Convert.ToInt32(Console.ReadLine());
            Console.Write("B: ");
            int B = Convert.ToInt32(Console.ReadLine());

            for (int i = A + 1; i < B; i++)
            {
                Console.WriteLine(i + ": " + Math.Pow(i,2));
            }
        }
    }
}