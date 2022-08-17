using System;

namespace CSharp
{
    class Car
    {
        private int id;
        private string license;
        private string driver;
        private int numberOfPassengers;

        public Car(int id, string license, string driver, int numberOfPassengers)
        {
            this.id = id;
            this.license = license;
            this.driver = driver;
            this.numberOfPassengers = numberOfPassengers;
        }
    }
}