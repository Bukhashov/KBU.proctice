using System;

namespace Task_6
{
    class Program
    {
        static void Main(string[] args)
        {
            double r, h, V;
            Console.WriteLine("r: ");
            r = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("h: ");
            h = Convert.ToDouble(Console.ReadLine());

            V = (Math.PI * Math.Pow(r, 2)) * h;
                        
            Console.WriteLine("S: " + Convert.ToString(V));
        }
    }
}