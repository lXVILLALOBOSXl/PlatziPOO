class Account{
    constructor(id, name, document, email, password){
        this.id = id;
        this.name = name;
        this.document = document;
        this.email = email;
    }

    toString = function(){
        console.log(this.id + " - " + this.name + " - " + this.document + " - " + this.email);
    }
}