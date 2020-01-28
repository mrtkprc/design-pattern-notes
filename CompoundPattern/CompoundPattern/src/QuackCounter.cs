namespace CompoundPattern
{
    public class QuackCounter : IQuackable
    {
        private IQuackable m_duck;
        private static int m_numberOfQuacks;

        public QuackCounter(IQuackable duck)
        {
            m_duck = duck;
        }

        public void Quack()
        {
            m_duck.Quack();
            m_numberOfQuacks++;
        }

        public static int GetQuacks()
        {
            return m_numberOfQuacks;
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