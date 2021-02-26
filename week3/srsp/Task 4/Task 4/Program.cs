using System;

namespace Task_4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("2 san engiz \n1 san: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("2 san: ");
            int b = Convert.ToInt32(Console.ReadLine());
            int j;

            if (a == b)
            {
                j = a + b;
            }
            else
            {
                j = 0;
            }
            
            Console.WriteLine("Jauabi "+ j);
        }
    }
}