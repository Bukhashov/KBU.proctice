using System;

namespace Task_5
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

            if (a > b && a < c)
            {
                Console.WriteLine(a + " ortasha san");
            }else if (b > a && b < c)
            {
                Console.WriteLine(b + " ortasha san");
            }else if (c > a && c < b)
            {
                Console.WriteLine(c + " ortasha san");
            }
        }
    }
}