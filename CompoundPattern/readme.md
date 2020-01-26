###Compound Pattern Recipes
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


