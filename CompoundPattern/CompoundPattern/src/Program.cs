using System;

namespace CompoundPattern
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Compound Pattern Section In Head First Design Pattern");
            DuckSimulator simulator = new DuckSimulator();

            simulator.simulate();


        }
    }
}