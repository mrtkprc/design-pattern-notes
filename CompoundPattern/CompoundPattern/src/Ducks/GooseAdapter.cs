namespace CompoundPattern.Ducks
{
    public class GooseAdapter : IQuackable
    {
        private Observable m_observable;
        private Goose m_goose;

        public GooseAdapter(Goose goose)
        {
            m_observable = new Observable(this);
            m_goose = goose;
        }

        public void Quack()
        {
            m_goose.honk();
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