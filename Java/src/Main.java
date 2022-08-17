import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Car car = new Car(1, "ABC-1234", new Account(1, "João", "joaohjal", "joao@mail.com", "123456"), 4);
        System.out.println(car.toString());
    }
}
