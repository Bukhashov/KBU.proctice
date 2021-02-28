using System;

namespace Task_10
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("number: ");
            int number = Convert.ToInt32(Console.Read());

            int n = 0;

            for (int i = number; i > 0; i = i / 10)
            {
                n = n + i % 10;
            }
            
            Console.WriteLine("n: " + n);
        }
    }
}