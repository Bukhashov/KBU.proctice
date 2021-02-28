using System;

namespace Task_6
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] Arr = new int[3] {1, 5, 1};

            for (int i = 0; i < Arr.Length; i++)
            {
                for (int j = i+1; j < Arr.Length; j++)
                {
                    if (Arr[i] != Arr[j])
                    {
                        Console.WriteLine(Arr[i]);
                    }
                }
            }
        }
    }
}