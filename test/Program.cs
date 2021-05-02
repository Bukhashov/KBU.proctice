using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Xml.Linq;

namespace exchangeRates
{
    class Program
    {
        static string cmd,
            response;
        
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
            Console.Write("Hello user ... \nProject name: Exchange Rates\nthis is a console program for exchange rates\ninfo:: --help or -h ");
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
            }else if (cmd == "start")
            {
                PrasingXml();
            }else if (cmd == "all")
            {
                allValute();
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
            
            for (int i = 0; i < Valute.Count; i++)
            {
                if (Valute[i].Element("NumCode").Value == "051")
                {
                    //Console.Write(Valute[i]);
                }
            }
           
        }

        static void allValute()
        {
            XElement contects = XElement.Parse(response);
            List<XElement> Valute = contects.Elements("Valute").ToList();

            Console.Write("");
            for (int i = 0; i < Valute.Count; i++)
            {
                Console.Write(Valute[i].Element("CharCode").Value + "\t" 
                + Valute[i].Element("Nominal").Value + "\t" 
                + Valute[i].Element("Value").Value + "\t" 
                + Valute[i].Element("Name").Value + "\n" );
            }
        }
        
        

        
    }
}