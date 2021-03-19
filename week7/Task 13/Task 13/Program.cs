/*  Ввести целочисленный массив, состоящий из 15 элементов.
 *  Определить сумму и разность максимального и минимального элементов.
 */

using System;
using System.Linq;

namespace Task_13
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] Array = new int[15];
            Random RanNumber = new System.Random();
            
            for (int i = 0; i < 15; i++)
            {
                Array[i] = RanNumber.Next(20, 50);
                Console.Write(Array[i] + " ");
            }
            
            Console.WriteLine("\nMax:" + Array.Max() + "\nMin: " + Array.Min());
        }
    }
}