namespace CompoundPattern.Factories
{
    public abstract class AbstractDuckFactory
    {
        public abstract IQuackable createMallardDuck();
        public abstract IQuackable createRedheadDuck();
        public abstract IQuackable createDuckCall();
        public abstract IQuackable createRubberDuck();
    }
}