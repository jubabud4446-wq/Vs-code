package JAVA.Lab.PDF4;
import java.util.Scanner;

class Calculator{
    int add(int a, int b)
    {
        return a+b;
    }

    double add(double a, double b)
    {
        return a+b;
    }

    int add(int a, int b, int c)
    {
        return a+b+c;
    }
}

public class p5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Calculator objCalculator = new Calculator();

        // int a, b, c;
        // double d, e;

        System.out.print("Enter 2 int: ");
        System.out.print("Sum: " +objCalculator.add(sc.nextInt(), sc.nextInt()));
        System.out.println();

        System.out.print("Enter 2 doubles: ");
        System.out.print("Sum: " +objCalculator.add(sc.nextDouble(), sc.nextDouble()));
        System.out.println();

        System.out.print("enter 3 int: ");
        System.out.print("Sum: " +objCalculator.add(sc.nextInt(), sc.nextInt(), sc.nextInt()));
        System.out.println();

        sc.close();
    }
}
