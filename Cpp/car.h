#include <string>

using namespace std;

class Car
{
    private:

        int id;
        string license;
        int numbeerOfPassengers;
        Account *driver;

    public:

        Car(int id, string license, int numbeerOfPassengers, Account *driver){
            this->id =id;
            this->license = license;
            this->driver = driver;
            this->numbeerOfPassengers = numbeerOfPassengers;
        }
        
        ~Car();

        string toString(){
            return "Car [id=" + to_string(id) + ", license=" + license + ", driver=" + driver->toString() + ", numbeerOfPassengers=" + to_string(numbeerOfPassengers) + "]";
        }
};