using System;
using System.Collections.Generic;
using System.Linq;


namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] inputs = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int n = inputs[0]; //    houses
            int m = inputs[1]; // tasks

            List<int> tasks = Array.ConvertAll(Console.ReadLine().Split(), int.Parse).ToList<int>();

            int currentPosition = 1;
            long totalTime = 0;

            foreach (var task in tasks)
            {
                if (task >= currentPosition)
                {
                    // If the target house is ahead or the same, move directly
                    totalTime += task - currentPosition;
                }
                else
                {
                    // If the target house is behind, wrap around
                    totalTime += (n - currentPosition) + task;
                }
                // Update current position
                currentPosition = task;
            }

            // Output the result
            Console.WriteLine(totalTime);


        }
    }
}
