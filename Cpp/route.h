#include <string>

using namespace std;

class Route
{
    private:

        int id;
        double start[2];
        double end[2];

    public:

        Route(int id, double start[2], double end[2]){
            this->id = id;
            this->start[0] = start[0];
            this->start[1] = start[1];
            this->end[0] = end[0];
            this->end[1] = end[1];
        }

        ~Route();
};