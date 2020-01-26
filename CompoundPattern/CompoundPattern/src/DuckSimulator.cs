using System;
using CompoundPattern.Ducks;

namespace CompoundPattern
{
    public class DuckSimulator
    {
        public void simulate()
        {
            IQuackable mallardDuck = new MallardDuck();
            IQuackable redheadDuck = new ReadheadDuck();
            IQuackable duckCall = new DuckCall();
            IQuackable rubberDuck = new RubberDuck();
            IQuackable gooseDuck = new GooseAdapter(new Goose());
            
            Console.WriteLine("\n.......Duck simulator.......");
            
            simulate(mallardDuck);
            simulate(redheadDuck);
            simulate(duckCall);
            simulate(rubberDuck);
            simulate(gooseDuck);
        }

        private void simulate(IQuackable duck)
        {
            duck.Quack();
        }
    }
}