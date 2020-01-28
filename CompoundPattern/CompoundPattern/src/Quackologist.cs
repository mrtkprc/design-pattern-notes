using System;

namespace CompoundPattern
{
    public class Quackologist : IObserver
    {
        public void update(IQuackObservable duck)
        {
            Console.WriteLine("Quacklogist: " + duck + " just quacked");
        }
    }
}