public class Car {
    private Integer id;
    private String license;
    private Account driver;
    private Integer numberOfPassengers;

    public Car(Integer id, String license, Account driver, Integer numberOfPassengers) {
        this.id = id;
        this.license = license;
        this.driver = driver;
        this.numberOfPassengers = numberOfPassengers;
    }

    @Override
    public String toString() {
        return "Car{" +
                "id=" + id +
                ", license='" + license + '\'' +
                ", driver=" + driver +
                ", numberOfPassengers=" + numberOfPassengers +
                '}';
    }
}
