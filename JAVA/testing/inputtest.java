package JAVA.testing;

import java.util.Scanner;

public class inputtest {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("What is your name?");
        String name = input.nextLine();

        System.out.println("Enter your age:");
        int age = input.nextInt();

        System.out.println("Enter GPA:");
        double gpa = input.nextDouble();

        System.out.println("Hello, " + name + "!");
        System.out.println("You are " + age + " years old.");
        System.out.println("Your GPA is " + gpa);

        input.close();
    }
}
