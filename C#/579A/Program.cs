using System;

namespace _579A
{
    internal class Program
    {
        static void Main(string[] args)
        {
            long n = Convert.ToUInt32(Console.ReadLine());
            string binary = Convert.ToString(n, 2);
            int result = 0;
            foreach (var bit in binary)
            {
                if (bit == '1')
                    ++result;
            }
            Console.WriteLine(result);
        }
    }
}
