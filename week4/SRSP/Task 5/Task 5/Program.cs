using System;

namespace Task_5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("2 nin darejesi bolatin san engiz \nN: ");
            int N = Convert.ToInt32(Console.ReadLine());
            int K = 1;

            while (N > 2)
            {
                N /= 2;
                K++;
            }
            Console.WriteLine("K: " + K);
        }
    }
}