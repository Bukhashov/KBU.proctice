using System;

namespace Task_5
{
    class Program
    {
        static void Main(string[] args)
        {
            double r, h, S;
            Console.WriteLine("r: ");
            r = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("h: ");
            h = Convert.ToDouble(Console.ReadLine());

            S = (2 * Math.PI * r * h) + (2 * Math.PI * Math.Pow(r, 2));
            
            Console.WriteLine("S: " + Convert.ToString(S));
        }
    }
}