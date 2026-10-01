package JAVA.Lab.PDF4;

import java.util.Scanner;

class Shape {
    public double calculateArea()
    {
        return 0;
    }
}

class Circle extends Shape {
    int radius;

    Circle(int radius)
    {
        this.radius = radius;
    }

    public double calculateArea()
    {
        return Math.PI * radius * radius;
    }
}

class Rectangle extends Shape {
    int length;
    int width;

    Rectangle(int length, int width)
    {
        this.length = length;
        this.width = width;
    }

    public double calculateArea()
    {
        return length * width;
    }
}

public class p6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter radius: ");
        int radius = sc.nextInt();

        System.out.print("Enter length: ");
        int length = sc.nextInt();

        System.out.print("Enter width: ");
        int width = sc.nextInt();

        Shape s1 = new Circle(radius);
        Shape s2 = new Rectangle(length, width);

        System.out.println("Circle Area: " + s1.calculateArea());
        System.out.println("Rectangle Area: " + s2.calculateArea());

        sc.close();
    }
}