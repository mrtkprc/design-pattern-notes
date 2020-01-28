using System;

namespace CompoundPattern.Ducks
{
    public class RubberDuck : IQuackable
    {
        private Observable m_observable;

        public RubberDuck()
        {
            m_observable = new Observable(this);
        }
        
        public void Quack()
        {
            Console.WriteLine("RubberDuck::Squeak");
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