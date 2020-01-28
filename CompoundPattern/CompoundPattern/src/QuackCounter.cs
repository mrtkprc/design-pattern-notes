namespace CompoundPattern
{
    public class QuackCounter : IQuackable
    {
        private IQuackable m_duck;
        private Observable m_observable;
        private static int m_numberOfQuacks;

        public QuackCounter(IQuackable duck)
        {
            m_duck = duck;
            m_observable = new Observable(duck);
        }

        public void Quack()
        {
            m_duck.Quack();
            m_numberOfQuacks++;
            notifyObservers();
        }

        public static int GetQuacks()
        {
            return m_numberOfQuacks;
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