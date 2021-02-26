using System;

namespace Task_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Sandi engiz: ");
            int a = Convert.ToInt32(Console.ReadLine());

            if (a % 2 == 0)
            {
                Console.WriteLine("Jub");
            }
            else
            {
                Console.WriteLine("Taq");
            }
        }
    }
}