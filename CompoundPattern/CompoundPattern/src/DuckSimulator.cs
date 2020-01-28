using System;
using CompoundPattern.Ducks;
using CompoundPattern.Factories;

namespace CompoundPattern
{
    public class DuckSimulator
    {
        public void simulate(AbstractDuckFactory duckFactory)
        {
            IQuackable redheadDuck = duckFactory.createRedheadDuck();
            IQuackable duckCall = duckFactory.createDuckCall();
            IQuackable rubberDuck = duckFactory.createRubberDuck();
            IQuackable gooseDuck = new GooseAdapter(new Goose());
            
            Flock flockOfDucks = new Flock();
            
            flockOfDucks.add(redheadDuck);
            flockOfDucks.add(duckCall);
            flockOfDucks.add(rubberDuck);
            flockOfDucks.add(gooseDuck);


            IQuackable mallard1 = duckFactory.createMallardDuck();
            IQuackable mallard2 = duckFactory.createMallardDuck();
            IQuackable mallard3 = duckFactory.createMallardDuck();
            IQuackable mallard4 = duckFactory.createMallardDuck();
            
            Flock flockOfMallards = new Flock();
            
            flockOfMallards.add(mallard1);
            flockOfMallards.add(mallard2);
            flockOfMallards.add(mallard3);
            flockOfMallards.add(mallard4);
            
            flockOfDucks.add(flockOfMallards);
            
            Console.WriteLine("\n.......Duck simulator.......");
            
            Console.WriteLine("\nDuck Simulator: Whole Flock Simulation: ");
            simulate(flockOfDucks);
            
            Console.WriteLine("\nDuck Simulator: Mallard Flock Simulation: ");
            simulate(flockOfMallards);
            
            Console.WriteLine("\nDuck Simulator: With Observer:");
            Quackologist quackologist = new Quackologist();
            
            Console.WriteLine("\nThe ducks quacked: "+ QuackCounter.GetQuacks());
        }

        private void simulate(IQuackable duck)
        {
            duck.Quack();
        }
    }
}