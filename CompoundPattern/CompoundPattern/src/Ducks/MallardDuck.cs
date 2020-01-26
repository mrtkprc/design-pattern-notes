using System;

namespace CompoundPattern.Ducks
{
    public class MallardDuck : IQuackable
    {
        public void Quack()
        {
            Console.WriteLine("MallardDuck::Quack");
        }
    }
}