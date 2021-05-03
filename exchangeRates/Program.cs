using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Xml.Linq;

namespace exchangeRates
{
    class Program
    {
        static string cmd,
            response, database;
        
        static void Main(string[] args)
        {
            string url = "https://www.cbr-xml-daily.ru/daily_eng_utf8.xml";

            HttpWebRequest httpWebRequest = (HttpWebRequest) WebRequest.Create(url);
            HttpWebResponse httpWebResponse = (HttpWebResponse) httpWebRequest.GetResponse();
            
            using (StreamReader streamReader = new StreamReader(httpWebResponse.GetResponseStream()))
            {
                response = streamReader.ReadToEnd();
            }
            
            // start program
            Console.Write("Hello user ... \nProject name: Exchange Rates\nthis is a console program for exchange rates\n\ninfo:: --help or -h\n\n1| currency Converter\n2| all exchange rates");
            fancmd();

        }
        
        static void fancmd()
        {
            Console.Write("\n>>> ");
            cmd = Console.ReadLine();
            cmd = cmd.ToLower();

            if (cmd == "-h" || cmd == "--help" || cmd == "help")
            {
                cmdHelp();
            }else if (cmd == "1" || cmd == "converter"  || cmd == "start")
            {
                PrasingXml();
            }else if (cmd == "2" || cmd == "all")
            {
                allValute();
            }else if (cmd == "3" || cmd == "exit"){
                Environment.Exit(-1);
            }else {
                Console.WriteLine("select number command or write command");
            }
        }
        
        static void cmdHelp()
        {
            Console.Write("info :: cmd\nstart or 1 \t--this is the command to run the program\nall \t--all exchange rates");
            fancmd();
        }


        static void PrasingXml()
        {
            XElement contects = XElement.Parse(response);
            List<XElement> Valute = contects.Elements("Valute").ToList();
            
            Console.Write("First Valute: ");
            string firstValuteName = Console.ReadLine();
            firstValuteName = firstValuteName.ToUpper();
        
            Console.Write("Second Valute: ");
            string secondValuteName = Console.ReadLine();
            secondValuteName = secondValuteName.ToUpper();
            
            float firstValute = 0, secondValute = 0,
                firstValuteNominal = 0, secondValuteNominal = 0;

            for (int i = 0; i < Valute.Count; i++)
            {
                if (Valute[i].Element("CharCode").Value == firstValuteName)
                {
                    string FirValStr = Valute[i].Element("Value").Value;
                    firstValute = float.Parse(FirValStr.Replace(",", "."));

                    firstValuteNominal = float.Parse(Valute[i].Element("Nominal").Value);
                }
                else if(Valute[i].Element("CharCode").Value == secondValuteName){

                    string SecValStr = Valute[i].Element("Value").Value;
                    secondValute = float.Parse(SecValStr.Replace(",", "."));

                    secondValuteNominal = float.Parse(Valute[i].Element("Nominal").Value);
                }
            }

            float frSumOneNominal =  firstValute / firstValuteNominal,
                secSumOneNominal = secondValute / secondValuteNominal,
                summa = 0;

            summa = frSumOneNominal / secSumOneNominal;
            
            Console.Write(firstValuteName + ": 1\t\t" + secondValuteName + ": " + summa + "\n");

            Console.Write("Summa " + firstValuteName + ": ");
            float converSumma = float.Parse(Console.ReadLine()),
            converSummaResul = converSumma * summa;

            Console.Write(firstValuteName + ": " + converSumma  + " == " + secondValuteName + ": " + converSummaResul);

            fancmd();
        }

        static void allValute()
        {
            XElement contects = XElement.Parse(response);
            List<XElement> Valute = contects.Elements("Valute").ToList();

            Console.Write("Code\tValute\tNominal\tcourse\t\tcountry\n");
            for (int i = 0; i < Valute.Count; i++)
            {
                Console.Write(Valute[i].Element("NumCode").Value + "\t" 
                + Valute[i].Element("CharCode").Value + "\t"
                + Valute[i].Element("Nominal").Value + "\t" 
                + Valute[i].Element("Value").Value + "\t\t" 
                + Valute[i].Element("Name").Value + "\n" );
            }   
            fancmd();
        }
    }
}