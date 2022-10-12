public class Bike
{
    private String brand;
    private Fuel fuel;
    private Type type;
    private String madeIn;

    public Bike(String brand, Fuel fuel, Type type, String madeIn) {
        this.brand = brand;
        this.fuel = fuel;
        this.type = type;
        this.madeIn = madeIn;
    }

    public String getBrand() {
        return brand;
    }

    public Fuel getFuel() {
        return fuel;
    }

    public Type getType() {
        return type;
    }

    public String getMadeIn() {
        return madeIn;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setFuel(Fuel fuel) {
        this.fuel = fuel;
    }

    public void setType(Type type) {
        this.type = type;
    }

    public void setMadeIn(String madeIn) {
        this.madeIn = madeIn;
    }

    @Override
    public String toString() {
        return "Bike{" +
                "brand='" + brand + '\'' +
                ", fuel=" + fuel +
                ", type=" + type +
                ", madeIn='" + madeIn + '\'' +
                '}';
    }
}
