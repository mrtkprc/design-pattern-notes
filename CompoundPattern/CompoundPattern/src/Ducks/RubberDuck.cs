using System;

namespace CompoundPattern.Ducks
{
    public class RubberDuck : IQuackable
    {
        public void Quack()
        {
            Console.WriteLine("RubberDuck::Squeak");
        }

        public void registerObserver(IObserver observer)
        {
            throw new NotImplementedException();
        }

        public void notifyObservers()
        {
            throw new NotImplementedException();
        }
    }
}