using System;

namespace Task_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("3 san engiz \n1 san: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("2 san: ");
            int b = Convert.ToInt32(Console.ReadLine());
            Console.Write("3 san: ");
            int c = Convert.ToInt32(Console.ReadLine());

            if (a > b && a > c)
            {
                Console.WriteLine(a + " ulken san");
            }else if (b > a && b > c)
            {
                Console.WriteLine(b + " ulken san");
            }else if (c > a && c > a)
            {
                Console.WriteLine(c + " ulken san");
            }else
            {
                Console.WriteLine("barlik san ten");
            }
        }
    }
}