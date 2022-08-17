using System;

namespace CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Car car = new Car(1, "ABC-1234", new Account(1, "João", "joaohjal", "joao@mail.com", "123456"), 4);
            Console.WriteLine(car.ToString());
        }
    }
}
