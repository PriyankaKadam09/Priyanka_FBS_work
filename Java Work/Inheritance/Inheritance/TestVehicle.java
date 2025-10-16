class Vehicle
{
	String Brand;
	int speed;
	String getBrand() {
		return Brand;
	}
	void setBrand(String brand) {
		Brand = brand;
	}
	int getSpeed() {
		return speed;
	}
	
	void setSpeed(int speed) {
		this.speed = speed;
	}
	Vehicle() {
		
		Brand = "Default value";
		this.speed = 0;
	}
	
	Vehicle(String brand, int speed) {
	
		Brand = brand;
		this.speed = speed;
	}
	
	void display()
	{
		System.out.println("Barnd is"+this.Brand);
		System.out.println("Speed is "+this.speed+"Km/h");
	}
	
}//class  Vehicle ends here


class Car extends Vehicle
{
	int seats;
	double price;
	int getSeats() {
		return seats;
	}
	void setSeats(int seats) {
		this.seats = seats;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	Car() {
		super();
		this.seats=0;
		this.price=0;
		
	}
	Car(String brand, int speed,int s,double p) {
		super(brand, speed);
		this.seats=s;
		this.price=p;
	}
	void display()
	{
		super.display();
		System.out.println("Seats is"+this.seats);
		System.out.println("Price is "+this.price);
	}
	
}//class Car ends here


class Bike extends Vehicle
{
	double price;
	boolean hasGear;
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	boolean isHasGear() {
		return hasGear;
	}
	void setHasGear(boolean hasGear) {
		this.hasGear = hasGear;
	}
	
	Bike()
	{
		super();
		this.price=0;
		this.hasGear=true;
	}
	Bike(String brand, int speed,double price, boolean hasGear) {
		super(brand,speed);
		this.price = price;
		this.hasGear = hasGear;
	}
	void display()
	{
		super.display();
		System.out.println("Price is "+this.price);
		System.out.println("Bike has gears?"+this.hasGear);
	}
	
}//class Bike ends here


class Truck extends Vehicle
{
	int capacity;

	int getCapacity() {
		return capacity;
	}

	void setCapacity(int capacity) {
		this.capacity = capacity;
	}

	Truck() {
		super();
		this.capacity=0;
	}

	Truck(String brand, int speed,int cap) {
		super(brand, speed);
		this.capacity=cap;
	}
	
}
public class TestVehicle {

	public static void main(String[] args) {
	
		Vehicle v1 = new Vehicle(); 
        v1.display();

        System.out.println();
        Vehicle v2 = new Vehicle("Toyata",50);  
        v2.display();
        
        System.out.println();
        Car c1=new Car();
        c1.display();
        
        System.out.println();
        Car c2=new Car("Tata",30,8,10000);
        c2.display();
        
        System.out.println();
        Bike b1=new Bike();
        b1.display();
        
        System.out.println();
        Bike b2=new Bike("Honda",40,120000,true);
        b2.display();
        
        Truck t1=new Truck();
        t1.display();
        
        System.out.println();
        Truck t2=new Truck("Tata",90,10);
        t2.display();
       
        
	}

}
