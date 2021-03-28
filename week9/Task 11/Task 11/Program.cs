using System;

namespace Task_11
{
    class Program
    {
        static void Main(string[] args)
        {
            int plus = 0,
                aritEnv = 0,
                k = 0;
            int[,] arr = new int[3, 3] {
                {9, 8, 7},
                {6, 5, 4},
                {3, 2, 1}
            };
            
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    plus += arr[i, j];
                    k++;
                }
            }
            aritEnv = plus / k;
            Console.Write("Sandar qosindisi: " + plus  + "\nArifmetikaliq ortasi: " + aritEnv);
            
            
        }
    }
}