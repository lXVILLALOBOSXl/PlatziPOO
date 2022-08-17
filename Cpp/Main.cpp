#include <iostream>
#include <string>
#include "account.h"
#include "car.h"
#include "payment.h"
#include "route.h"

using namespace std;

int main(){
    Car *car = new Car(1, "ABC-1234", 4, new Account(1, "João", "joaohjal", "joao@mail.com", "123456"));
    cout<<car->toString()<<endl;
    return 0;
}