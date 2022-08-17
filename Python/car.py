from account import Account

class Car:
    id                  = int
    license             = str  
    driver              = Account 
    numberOfPassengers  = int

    def __init__(self, id, license, driver, numberOfPassengers):
        self.license = license
        self.driver = driver
        self.numberOfPassengers = numberOfPassengers
        self.id = id