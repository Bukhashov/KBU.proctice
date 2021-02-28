using System;

namespace Task_8
{
    class Program
    {
        static void Main(string[] args)
        {
            Random RNumber = new Random();
            int sizeRNumber = 5;

            for (int i = 0; i < sizeRNumber; i++)
            {
                int number = RNumber.Next(0, sizeRNumber);
                Console.Write(number  + " ");
            }
        }
    }
}