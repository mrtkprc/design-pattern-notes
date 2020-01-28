namespace CompoundPattern.Ducks
{
    public class GooseAdapter : IQuackable
    {
        private Goose m_goose;

        public GooseAdapter(Goose goose)
        {
            m_goose = goose;
        }

        public void Quack()
        {
            m_goose.honk();
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