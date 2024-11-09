// CarApplication.java
public class CarApplication {
    public static void main(String[] args) {
        // Creating two Car objects
        Car car1 = new Car("Toyota Camry", "2020", 25000);
        Car car2 = new Car("Honda Accord", "2021", 28000);

        // Displaying initial prices
        System.out.println("Car 1 (" + car1.getModel() + "): $" + car1.getPrice());
        System.out.println("Car 2 (" + car2.getModel() + "): $" + car2.getPrice());

        // Applying discounts
        car1.applyDiscount(5); // 5% discount for car1
        car2.applyDiscount(7); // 7% discount for car2

        // Displaying prices after discounts
        System.out.println("Car 1 after 5% discount: $" + car1.getPrice());
        System.out.println("Car 2 after 7% discount: $" + car2.getPrice());
    }
}