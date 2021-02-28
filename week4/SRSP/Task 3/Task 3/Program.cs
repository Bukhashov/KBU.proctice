using System;

namespace Task_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("N: ");
            double N = Convert.ToDouble(Console.ReadLine()); 
            Console.Write("K: "); 
            double K = Convert.ToDouble(Console.ReadLine()), k = 0;
            bool bool_key = true;
        
            while (bool_key)
            {
                if (N >= K)
                {
                    k++;
                    N -= K;
                            
                }
                else
                {
                    Console.WriteLine("Butin san: " + k + "\nQaldiq: " + N);
                    bool_key = false;
                }
            }
        }
    }
}