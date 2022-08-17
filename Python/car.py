class Car:
    id                  = int
    license             = str  
    driver              = str  
    numberOfPassengers  = int

    def __init__(self, id, license, driver, numberOfPassengers):
        self.license = license
        self.driver = driver
        self.numberOfPassengers = numberOfPassengers
        self.id = id