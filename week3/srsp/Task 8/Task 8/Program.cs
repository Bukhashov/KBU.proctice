using System;

namespace Task_8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ush burishtin jaqtarin engiz \na: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("b: ");
            int b = Convert.ToInt32(Console.ReadLine());
            Console.Write("c: ");
            int c = Convert.ToInt32(Console.ReadLine());

            int A = a * b,
                B = b * c,
                C = a * c;

            if (A + B > C)
            {
                Console.WriteLine("Ush burish");
            }
            else
            {
                Console.WriteLine("Ush burish");
            }
        }
    }
}