using System;

namespace CompoundPattern.Ducks
{
    public class DuckCall : IQuackable
    {
        private Observable m_observable;

        public DuckCall()
        {
            m_observable = new Observable(this);
        }
        
        public void Quack()
        {
            Console.WriteLine("DuckCall::Kwak");
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