from account import Account
from car import Car

def run():
    car = Car(1, "ABC-123", Account(1, "João", "joaohjal", "joao@mail.com", "123456"), 4)
    print(vars(car))

if __name__ == "__main__":
    run()
