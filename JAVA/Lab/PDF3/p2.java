package JAVA.Lab.PDF3;

import java.util.Scanner;

class Rectangle{
    double length, width;

    Rectangle()
    {
        length = 1;
        width = 1;
    }

    Rectangle(int a, int b)
    {
        length = a;
        width = b;
    }

    double area()
    {
        return length * width;
    }

    double perimeter()
    {
        return 2 * (length + width);
    }
}

public class p2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length: ");
        int l = sc.nextInt();

        System.out.print("Enter width: ");
        int w = sc.nextInt();

        Rectangle o1 = new Rectangle();
        Rectangle o2 = new Rectangle(l, w);

        System.out.println("Default Rectangle -> Area: " +o1.area()+ " Perimeter: " +o1.perimeter());
        System.out.println("Custom Rectangle -> Area: " +o2.area()+ " Perimeter: " +o2.perimeter());

        sc.close();
    }
}