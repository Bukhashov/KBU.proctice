using System;

namespace Task_7
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("A > B \nA: ");
            int A = Convert.ToInt32(Console.ReadLine());
            Console.Write("B: ");
            int B = Convert.ToInt32(Console.ReadLine());
            int I = 1;

            for (int i = A + 1; i < B; i++)
            {
                I *= i;
            }
            Console.Write("I: " + I);
        }
    }
}