using CompoundPattern.Ducks;

namespace CompoundPattern.Factories
{
    public class DuckFactory : AbstractDuckFactory
    {
        public override IQuackable createMallardDuck()
        {
            return  new MallardDuck();
        }

        public override IQuackable createRedheadDuck()
        {
            return new ReadheadDuck();
        }

        public override IQuackable createDuckCall()
        {
            return new DuckCall();
        }

        public override IQuackable createRubberDuck()
        {
            return new RubberDuck();
        }
    }
}