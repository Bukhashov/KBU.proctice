using System;

namespace Task_6
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] arr = new int[3, 4];
            Random Rand = new Random();

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    arr[i, j] = Rand.Next(13, 35);
                    Console.Write(arr[i,j] + " ");
                }
                Console.WriteLine("");
            }

            int max1 = arr[0, 0],
                max2 = arr[2, 0],
                maxi1 = 0,
                maxi2 = 0,
                maxj1 = 0,
                maxj2 = 0,
                temporarily;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (i == 0 && max1 < arr[i,j])
                    {
                        max1 = arr[i, j];
                        maxi1 = i;
                        maxj1 = j;
                    }

                    if (i == 2 && max2 < arr[i,j])
                    {
                        max2 = arr[i, j];
                        maxi2 = i;
                        maxj2 = j;
                    }
                }
            }
            Console.WriteLine("-------------------------------");
            Console.Write("1 max: " + max1 + "\ti: "+ maxi1 + "\tj: "+ maxj1 + "\n2 max: " + max2 + "\ti: " + maxi2 + "\tj: " + maxj2 +"\n");
            Console.WriteLine("-------------------------------");
            
            temporarily = arr[maxi1, maxj1];
            arr[maxi1, maxj1] = arr[maxi2, maxj2];
            arr[maxi2, maxj2] = temporarily;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    Console.Write(arr[i,j] + " ");
                }
                Console.WriteLine("");
            }

        }
    }
}