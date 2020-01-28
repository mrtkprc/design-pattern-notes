### Compound Pattern Recipes
Compound Pattern is told at Head First Design Patterns. 
Each step of the lesson is listed in this file step by step.
#### 1. Create a Quackable Interaface

```   
    public interface IQuackable
    {
        void Quackable(); 
    }

```

#### 2. Some Ducks that implements Quackable

```   
    public class MallardDuck : IQuackable
    {
        public void Quackable()
        {
            Console.WriteLine("MallardDuck::Quack");
        }
    }

```

``` 
Other Ducks 
```

#### 3. Simulator

```   
    public class DuckSimulator
        {
            public void simulate()
            {
                IQuackable mallardDuck = new MallardDuck();
                IQuackable redheadDuck = new ReadheadDuck();
                IQuackable duckCall = new DuckCall();
                IQuackable rubberDuck = new RubberDuck();
                
                Console.WriteLine("\nDuck simulator...");
                
                simulate(mallardDuck);
                simulate(redheadDuck);
                simulate(duckCall);
                simulate(rubberDuck);
            }
    
            private void simulate(IQuackable duck)
            {
                duck.Quack();
            }
        }

```

#### 4. Goose

```   
        public class Goose
        {
            public void honk()
            {
                Console.WriteLine("Honk");
            }
        }

```

#### 5. Since Goose's interface doesn't with comply IQuackable, Adapter should be used.

```   
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
    }
```

#### 6. Now geese should be able to plat in the simulator, too.

```
...
IQuackable gooseDuck = new GooseAdapter(new Goose());


...

simulate(gooseDuck);
```

#### 7. Quick Run

```
    Related outputs :)
```

#### 8. Decorator Pattern
Let's create a decorator that gives the ducks some new behaviour (the behavior of counting) by wrapping them with a decorator object.  We won't have to change the Duck code at all.

``` 
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
    }
```
#### 9. Modify the method simulate
```
       IQuackable mallardDuck = new QuackCounter(new MallardDuck());
       IQuackable redheadDuck = new QuackCounter(new ReadheadDuck());
       IQuackable duckCall = new QuackCounter(new DuckCall());
       IQuackable rubberDuck = new QuackCounter(new RubberDuck());
       IQuackable gooseDuck = new GooseAdapter(new Goose());
```

### 10. Abstract Factory
```
    public abstract class AbstractDuckFactory
    {
        public abstract IQuackable createMallardDuck();
        public abstract IQuackable createRedheadDuck();
        public abstract IQuackable createDuckCall();
        public abstract IQuackable createRubberDuck();
    }
``` 

Duck Factory:

```
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
```

Counting Duck Factory:

```
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
```
### 11. Let's modify method simulate()

```
        public void simulate(AbstractDuckFactory duckFactory)
        {
            IQuackable mallardDuck = duckFactory.createMallardDuck();
            IQuackable redheadDuck = duckFactory.createRedheadDuck();
            IQuackable duckCall = duckFactory.createDuckCall();
            IQuackable rubberDuck = duckFactory.createRubberDuck();
            IQuackable gooseDuck = new GooseAdapter(new Goose());
            
            Console.WriteLine("\n.......Duck simulator.......");
            
            simulate(mallardDuck);
            simulate(redheadDuck);
            simulate(duckCall);
            simulate(rubberDuck);
            simulate(gooseDuck);
            
            Console.WriteLine("\nThe ducks quacked: "+ QuackCounter.GetQuacks());
        }
```

### 12. Let's create a flock of ducks.

```
    public class Flock : IQuackable
    {
        private ArrayList m_quackers;

        public Flock()
        {
            m_quackers = new ArrayList();
        }

        public void add(IQuackable quacker)
        {
            m_quackers.Add(quacker);
        }
        
        public void Quack()
        {
            IEnumerator iterator = m_quackers.GetEnumerator();
            
            IQuackable quacker = null;
            while (iterator.MoveNext())
            {
                quacker = (IQuackable)iterator.Current;
                quacker.Quack();
            }
        }
    }
```

### 13. Composite Structure with Iterator Pattern

```
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
                
                Console.WriteLine("\nThe ducks quacked: "+ QuackCounter.GetQuacks());
            }
    
```

### 14. Observer Pattern

```
    public interface IQuackObservable
    {
        void registerObservable(IObserver observer);
        void notifyObservers();
    }
```



       

