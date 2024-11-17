using System;
using System.Collections.Generic;
using System.Linq;


namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            List<string> list = new List<string>();
            for (int i = 0; i < n; i++) 
                list.Add(Console.ReadLine());
            for (int i = 0;i < n; i++)
                if (list[i].ToLower() == "yes")
                    Console.WriteLine("YES");
            else
                    Console.WriteLine("NO");


        }
    }
}
