using System;

namespace CSharp
{
    class Account
    {
        private int id;
        private string name;
        private string document;
        private string email;
        private string password;

        public Account(int id, string name, string document, string email, string password)
        {
            this.id = id;
            this.name = name;
            this.document = document;
            this.email = email;
            this.password = password;
        }

        public override string ToString()
        {
            return $"ID: {id}, Name: {name}, Document: {document}, Email: {email}, Password: {password}";
        }
    }
}