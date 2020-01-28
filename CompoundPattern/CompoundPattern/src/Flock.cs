using System.Collections;
using System.Data;

namespace CompoundPattern
{
    public class Flock : IQuackable
    {
        private ArrayList m_quackers;
        private Observable m_observable;
        
        public Flock()
        {
            m_quackers = new ArrayList();
            m_observable = new Observable(this);
        }

        public void add(IQuackable quacker)
        {
            m_quackers.Add(quacker);
        }
        
        public void Quack()
        {
            IEnumerator iterator = m_quackers.GetEnumerator();
            
            IQuackable quacker = null;
            while (iterator.MoveNext())
            {
                quacker = (IQuackable)iterator.Current;
                quacker.Quack();
            }
        }

        public void registerObserver(IObserver observer)
        {
            IEnumerator iterator = m_quackers.GetEnumerator();
            
            IQuackable quacker = null;
            while (iterator.MoveNext())
            {
                quacker = (IQuackable)iterator.Current;
                m_observable.registerObserver(observer);
            }
            
        }

        public void notifyObservers()
        {
            m_observable.notifyObservers();
        }
    }
}