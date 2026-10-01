package JAVA.Lab.PDF4;

import java.util.Scanner;

class Vehicle{
    String brand;
    double max_speed;

    void get_VehicleInfo()
    {
        System.out.println("Brand: "+brand);
        System.out.println("Max Speed: "+max_speed);
    }
}

class Car extends Vehicle{
    int numDoors;

    void get_Carinfo()
    {
        System.out.println("Number of Doors: "+numDoors);
    }

    void set_info(String b, double m, int d)
    {
        brand = b;
        max_speed = m;
        numDoors = d;
    }
}

public class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter brand: ");
        String bra = sc.nextLine();

        System.out.print("Enter max speed: ");
        int max = sc.nextInt();

        System.out.print("Enter number of doors: ");
        int dor = sc.nextInt();

        Car o1 = new Car();
        o1.set_info(bra, max, dor);

        o1.get_VehicleInfo();
        o1.get_Carinfo();

        sc.close();
    }
}
