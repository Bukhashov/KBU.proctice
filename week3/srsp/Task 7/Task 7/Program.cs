using System;

namespace Task_7
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Burishtin gradusin engiz: ");
            int g = Convert.ToInt32(Console.ReadLine());

            if (g == 180)
            {
                Console.WriteLine("Jazinqi burish");
            }else if (g == 90)
            {
                Console.WriteLine("Tik burish");
            }else if (g > 90 && g < 180)
            {
                Console.WriteLine("Dogal burish");
            }else if (g < 90 && g > 0)
            {
                Console.WriteLine("Suyir burish");
            }else if (g == 360)
            {
                Console.WriteLine("Toliq burish");
            }
        }
    }
}