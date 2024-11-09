// Car.java
public class Car {
    private String model;
    private String year;
    private double price;

    // Constructor to initialize instance variables
    public Car(String model, String year, double price) {
        this.model = model;
        this.year = year;
        setPrice(price); // Use the setPrice method to ensure price validation
    }

    // Setter and Getter for model
    public void setModel(String model) {
        this.model = model;
    }

    public String getModel() {
        return model;
    }

    // Setter and Getter for year
    public void setYear(String year) {
        this.year = year;
    }

    public String getYear() {
        return year;
    }

    // Setter and Getter for price
    public void setPrice(double price) {
        if (price > 0) {
            this.price = price;
        } else {
            System.out.println("Price must be positive. Value not set.");
        }
    }

    public double getPrice() {
        return price;
    }

    // Method to apply discount
    public void applyDiscount(double percentage) {
        if (percentage > 0 && percentage <= 100) {
            price -= (price * percentage / 100);
        }
    }
}



