using System;

namespace CompoundPattern.Ducks
{
    public class RubberDuck : IQuackable
    {
        public void Quack()
        {
            Console.WriteLine("RubberDuck::Squeak");
        }
    }
}