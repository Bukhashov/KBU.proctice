using System;

namespace Task_6
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
            int j = 0;

            if (a < b && a < c)
            {
                j = b + c;
            }else if (b < a && b < c)
            {
                j = a + c;
            } else if (c < a && c < b)
            {
                j = a + b;
            }
            
            Console.Write("Jauabi: " + j);
        }
    }
}