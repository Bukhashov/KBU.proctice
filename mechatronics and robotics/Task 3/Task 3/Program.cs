using System;

namespace Task_3
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] Arr = new int[3] {2, 5, 8};
            int j = 0;

            for (int i = 0; i < Arr.Length; i++)
            {
                j += Arr[i];
            }
            Console.Write("Output: " + j);


            }
    }
}