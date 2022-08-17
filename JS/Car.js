class Car{
    constructor(id, license, driver, numberOfPassengers){
        this.id = id;
        this.license = license;
        this.driver = driver;
        this.numberOfPassengers = numberOfPassengers;
    }

    toString = function(){
        console.log(this.id + " - " + this.license + " - " + this.driver + " - " + this.numberOfPassengers);
    }
}