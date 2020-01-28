using System;

namespace CompoundPattern.Ducks
{
    public class ReadheadDuck : IQuackable
    {
        public void Quack()
        {
            Console.WriteLine("ReadheadDuck::Quack");
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