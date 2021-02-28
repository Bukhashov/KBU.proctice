using System;

namespace Task_5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("1 kg konfetin bagasi: ");
            int K = Convert.ToInt32(Console.ReadLine());
            int J = 0, G = 0;

            for (int i = 1; i < 10; i++)
            {
                J += K / 10;
                Console.WriteLine("0."+i+": " + J);
            }
        }
    }
}