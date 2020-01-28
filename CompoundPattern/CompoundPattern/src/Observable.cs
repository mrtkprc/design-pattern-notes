using System.CodeDom;
using System.Collections;

namespace CompoundPattern
{
    public class Observable : IQuackObservable
    {
        private ArrayList m_observers;
        private IQuackObservable m_duck;

        public Observable(IQuackObservable duck)
        {
            m_observers = new ArrayList();
            this.m_duck = duck;
        }
        public void registerObserver(IObserver observer)
        {
            m_observers.Add(observer);
        }

        public void notifyObservers()
        {
            IEnumerator iterator = m_observers.GetEnumerator();

            while (iterator.MoveNext())
            {
                IObserver observer = (IObserver) iterator.Current;
                observer.update(m_duck);

            }
        }
    }
}