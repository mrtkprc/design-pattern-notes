using System;

namespace CompoundPattern.Ducks
{
    public class ReadheadDuck : IQuackable
    {
        public void Quack()
        {
            Console.WriteLine("ReadheadDuck::Quack");
        }
    }
}