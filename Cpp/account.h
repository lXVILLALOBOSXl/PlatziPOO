#include <string>

using namespace std;

class Account
{
    private:

        int id;
        string name;
        string document;
        string email;
        string password;

    public:

        Account(int id, string name, string document, string email, string password){
            this->id =id;
            this->name = name;
            this->document = document;
            this->email = email;
            this->password = password;
        }
        
        ~Account();

        string toString(){
            return "Account [id=" + to_string(id) + ", name=" + name + ", document=" + document + ", email=" + email + ", password=" + password + "]";
        }
};