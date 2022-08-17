#include <string>

using namespace std;

class Payment
{
    private:

        int id;

    public:

        Payment(int id){
            this->id = id;
        }

        ~Payment();
};