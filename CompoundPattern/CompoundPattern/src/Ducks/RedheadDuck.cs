using System;

namespace CompoundPattern.Ducks
{
    public class ReadheadDuck : IQuackable
    {
        private Observable m_observable;

        public ReadheadDuck()
        {
            m_observable = new Observable(this);
        }
        
        public void Quack()
        {
            Console.WriteLine("ReadheadDuck::Quack");
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