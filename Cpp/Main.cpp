#include <iostream>
#include <string>
#include "account.h"
#include "car.h"
#include "payment.h"
#include "route.h"

using namespace std;

int main(){
    Account *account = new Account(1, "João", "joaohjal", "joao@mail.com", "123456");
    cout<<"Hello World!";
    return 0;
}