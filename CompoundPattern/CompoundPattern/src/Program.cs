﻿using System;
using CompoundPattern.Factories;

namespace CompoundPattern
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Compound Pattern Section In Head First Design Pattern");
            AbstractDuckFactory duckFactory = new CountingDuckFactory();
                 
            DuckSimulator simulator = new DuckSimulator();

            simulator.simulate(duckFactory);


        }
    }
}