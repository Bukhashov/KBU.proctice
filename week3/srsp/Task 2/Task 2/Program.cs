using System;

namespace Task_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Sandi engiz: ");
            int a = Convert.ToInt32(Console.ReadLine());

            if (a >= 0)
            {
                Console.WriteLine("On san");
            }
            else
            {
                Console.WriteLine("Teris san");
            }
        }
    }
}