using System;

namespace Task_4
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] Arr = new int[3] {15, 10, 12};
            int[] ArrCopy = new int[3];

            for (int i = 0; i < Arr.Length; i++)
            {
                ArrCopy[i] = Arr[i];
                Console.Write(ArrCopy[i] + " ");
            }
        }
    }
}