using System;

namespace Task_4
{
    class Program
    {
        static void Main(string[] args)
        {
            double R, H, Sb;
            
            Console.WriteLine("R");
            R = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("H");
            H = Convert.ToDouble(Console.ReadLine());

            Sb = 2 * Math.PI * R * H;
            
            Console.WriteLine("Sb: " + string.Format("{0:0.000}", Sb));
        }
    }
}