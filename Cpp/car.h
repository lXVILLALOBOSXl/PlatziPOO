#include <string>

using namespace std;

class Car
{
    private:

        int id;
        string license;
        string driver;
        int numbeerOfPassengers;

    public:

        Car(int id, string license, string driver, int numbeerOfPassengers){
            this->id = id;
            this->license = license;
            this->driver = driver;
            this->numbeerOfPassengers = numbeerOfPassengers;
        }
        
        ~Car();
};