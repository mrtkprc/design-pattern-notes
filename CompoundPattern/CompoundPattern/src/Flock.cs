using System.Collections;
using System.Data;

namespace CompoundPattern
{
    public class Flock : IQuackable
    {
        private ArrayList m_quackers;

        public Flock()
        {
            m_quackers = new ArrayList();
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
            throw new System.NotImplementedException();
        }

        public void notifyObservers()
        {
            throw new System.NotImplementedException();
        }
    }
}