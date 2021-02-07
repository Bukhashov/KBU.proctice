using System;
using System.Timers;

namespace consoleBaptau
{
    class Program
    {
        static void Main(string[] args)
        {
            // Size and position Console
            Console.BackgroundColor = ConsoleColor.Black;
            Console.ForegroundColor = ConsoleColor.Green;
            
            // fixed: title console
            Console.Title = "Console Baptou";
            Console.SetWindowSize(15, 15);
            Console.SetWindowPosition(0, 0);

            // == OUTPUT - CONSOLE =======================================================================
            // ===========================================================================================
            // Time 
            Console.WriteLine("Today: {0:MM.dd.yyyy}",  DateTime.Today);
            Console.WriteLine("Time: {0:HH:mm}", DateTime.Now);
            // Title
            Console.WriteLine("Title: {0}" , Console.Title);
            // Size window [ console ]
            Console.WriteLine("Width: {0}", Console.WindowWidth);
            Console.WriteLine("Heigth: {0}", Console.WindowHeight);
            // Max: Width and Heigth
            Console.WriteLine("Max Width: {0}", Console.LargestWindowWidth);
            Console.WriteLine("Max Heigth: {0}", Console.LargestWindowHeight);
            // Color 
            Console.WriteLine("Color: {0}", Console.BackgroundColor);
            Console.WriteLine("Font color: {0}", Console.ForegroundColor);
            
            // clear 
            Console.WriteLine("clear console [Y|N]: ");
            string strClear = Console.ReadLine();
            if (strClear == "Y" || strClear == "y")
            {
                Console.Clear();
            }

        }
    }
}