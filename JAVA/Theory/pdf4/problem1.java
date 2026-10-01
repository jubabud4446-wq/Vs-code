package JAVA.Theory.pdf4;

import java.util.Scanner;

class Employee {
    String name;
    int id;
    double salary;

    public void get_info() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Salary: " + salary);
    }
}

class FTE extends Employee {
    int bonus = 10000;

    FTE(String n, int i, double s) {
        salary = s;
        id = i;
        name = n;

        salary += bonus;
    }
}

class PTE extends Employee {

    PTE(String n, int i, double s)
    {
        name = n;
        id = i;
        salary = s;
    }
}

public class problem1 {
    public static void main(String[] args) {
        String name;
        int id;
        double salary;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Name: ");
        name = sc.nextLine();
        System.out.print("Enter ID: ");
        id = sc.nextInt();
        System.out.print("Your Salary: ");
        salary = sc.nextDouble();

        FTE e1fFte = new FTE(name, id, salary);
        PTE e1Pte = new PTE(name, id, salary);

        e1fFte.get_info();
        e1Pte.get_info();

        sc.close();
    }
}