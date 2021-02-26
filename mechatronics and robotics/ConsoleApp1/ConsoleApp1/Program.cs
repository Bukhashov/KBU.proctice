using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("A: ");
            int A = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("B: ");
            int B = Convert.ToInt32(Console.ReadLine());

            if (A % 2 == 0 && B % 2 == 0)
            {
                Console.WriteLine("True");
            }
            else
            {
                Console.WriteLine("False");
            }
        }
    }
}