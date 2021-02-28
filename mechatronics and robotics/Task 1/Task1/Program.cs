using System;

namespace Task1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] Arr = new int[10]
                {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};

            for (int i = 0; i < 10; i++)
            {
                Console.Write(Arr[i] + " ");
            }
            
        }
    }
}