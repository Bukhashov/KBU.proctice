using System;

namespace Task_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("A ulken bolu kerek !\nA: ");
            double A = Convert.ToDouble(Console.ReadLine());
            Console.Write("B: ");
            double B = Convert.ToDouble(Console.ReadLine());
             
            bool pr = true;
            
            while (pr)
            {
                if (A > B)
                {
                    A -= B;
                }else if (A < B)
                {
                    pr = false;
                }
            }

            A = Math.Round(A, 2);
            Console.WriteLine("output: " + A);
        }
    }
}