using System;

namespace CSharp
{
    class Car
    {
        private int id;
        private string license;
        private Account driver;
        private int numberOfPassengers;

        public Car(int id, string license, Account driver, int numberOfPassengers)
        {
            this.id = id;
            this.license = license;
            this.driver = driver;
            this.numberOfPassengers = numberOfPassengers;
        }

        public override string ToString()
        {
            return $"ID: {id}, License: {license}, Driver: {driver}, Number of Passengers: {numberOfPassengers}";
        }
    }
}