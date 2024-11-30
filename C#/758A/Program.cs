using System;
using System.Linq;

namespace _758A
{
    internal class Program
    {
        static void Main(string[] args)
        {
            long n = Convert.ToUInt32(Console.ReadLine());
            var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int max = a.Max();
            long sum = a.Sum(x => max - x);

            Console.WriteLine(sum);
        }
    }
}
