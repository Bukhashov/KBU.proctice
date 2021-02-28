using System;

namespace Task_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] Arr = new int[3] {2, 5, 7};

            int[] Arr1;

            for (int i = Arr.Length; i < 0; i--)
            {
                Console.Write(Arr[i] + " ");
            }
        }
    }
}