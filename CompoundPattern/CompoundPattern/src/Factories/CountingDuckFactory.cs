using CompoundPattern.Ducks;

namespace CompoundPattern.Factories
{
    public class CountingDuckFactory : AbstractDuckFactory
    {
        public override IQuackable createMallardDuck()
        {
            return new QuackCounter(new MallardDuck());
        }

        public override IQuackable createRedheadDuck()
        {
            return new QuackCounter(new ReadheadDuck());
        }

        public override IQuackable createDuckCall()
        {
            return new QuackCounter(new DuckCall());
        }

        public override IQuackable createRubberDuck()
        {
            return new QuackCounter(new RubberDuck());
        }
    }
}