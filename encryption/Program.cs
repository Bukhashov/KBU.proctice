using System;

namespace encryption
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Hello user ... \nText: ");
            
            string strText = Console.ReadLine();
            char[] chr = strText.ToCharArray();
            char[] result = new char[chr.Length];
            
            Console.Write("select number command or write command \n1| SHIFR\n2| DESHIFR\n>>> ");
            string cmd = Console.ReadLine();
            
            if (cmd == "1" || cmd == "SHIFR" || cmd == "shifr")
            {
                Console.Write("1| encryption of numbers\n2| encryption by letter\n>>> ");
                cmd = Console.ReadLine();
                if (cmd == "1" || cmd == "encryption of numbers" || cmd == "number" || cmd == "numbers")
                {
                    shifrNumber(chr, result);
                }else if (cmd == "2" || cmd == "encryption by letter" || cmd == "letter")
                {
                    shifrLetter(chr, result);
                }
                else
                {
                    Console.WriteLine("select number command or write command");
                }


            }else if (cmd == "2" || cmd == "DESHIFR" || cmd == "deshifr")
            {
                Console.Write("1| decryption of numbers\n2| decryption by letter\n>>> ");
                cmd = Console.ReadLine();

                if (cmd == "1" || cmd == "decryption of numbers" || cmd == "numbers" || cmd == "number")
                {
                    deShifrNumber(chr, result);
                }else if (cmd == "2" || cmd == "decryption by letter" || cmd == "letter")
                {
                    deShifrLetter(chr, result);
                }
                else
                {
                    Console.WriteLine("select number command or write command");
                }
            }
            else
            {
                Console.Write("select number command or write command"); 
            }
        }

        
        static void shifrNumber(char[] charChr, char[] Result)
        {
            Console.Write("Key number: ");
            int keyNumber = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < charChr.Length; i++)
            {
                Result[i] = (char) (charChr[i] + keyNumber);
            }
            Console.WriteLine(Result);
        }

        static void deShifrNumber(char[] charChr,char[] Result)
        {
            Console.Write("Key number: ");
            int keyNumber = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < Result.Length; i++)
            {
                Result[i] = (char) (charChr[i] - keyNumber);
            }
            Console.WriteLine(Result);
        }

        static void shifrLetter(char[] charChr, char[] Result)
        {
            Console.Write("Key number: ");
            char keyLetter = Convert.ToChar(Console.ReadLine());
            for (int i = 0; i < charChr.Length; i++)
            {
                Result[i] = (char) (charChr[i] + keyLetter);
            }
            Console.WriteLine(Result);
        }

        static void deShifrLetter(char[] charChr, char[] Result)
        {
            Console.Write("Key number: ");
            char keyLetter = Convert.ToChar(Console.ReadLine());
            
            for (int i = 0; i < Result.Length; i++)
            {
                Result[i] = (char) (charChr[i] - keyLetter);
            }
            Console.WriteLine(Result);
        }
        

    }
}