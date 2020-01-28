using System;

namespace CompoundPattern.Ducks
{
    public class MallardDuck : IQuackable
    {
        private Observable m_observable;

        public MallardDuck()
        {
            m_observable = new Observable(this);
        }
        public void Quack()
        {
            Console.WriteLine("MallardDuck::Quack");
            notifyObservers();
        }

        public void registerObserver(IObserver observer)
        {
            m_observable.registerObserver(observer);
        }

        public void notifyObservers()
        {
            m_observable.notifyObservers();
        }
    }
}