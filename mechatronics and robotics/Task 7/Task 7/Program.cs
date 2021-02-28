using System;

namespace Task_7
{
    class Program
    {
        static void Main(string[] args)
        {
            double n1, n2, npow;
            
            Console.Write("Base number: ");
            n1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Exponent: ");
            n2 = Convert.ToDouble(Console.ReadLine());

            npow = Math.Pow(n1, n2);
            
            Console.WriteLine("pow: " + npow);
            
        }
    }
}