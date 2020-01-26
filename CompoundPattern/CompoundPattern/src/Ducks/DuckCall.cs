using System;

namespace CompoundPattern.Ducks
{
    public class DuckCall : IQuackable
    {
        public void Quack()
        {
            Console.WriteLine("DuckCall::Kwak");
        }
    }
}