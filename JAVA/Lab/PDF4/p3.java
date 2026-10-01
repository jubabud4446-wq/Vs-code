package JAVA.Lab.PDF4;

import java.util.Scanner;

class Employee{
    String name;
    double salary;

    Employee(String n, double s)
    {
        name = n;
        salary = s;
    }

    void DisplaySalary()
    {
        System.out.println("Employee Salary: " +salary);
    }
}

class Manager extends Employee{
    double bonus;
    Manager(String n, double s, double b){
        super(n, s);
        bonus = b;
    }

    void DisplaySalary()
    {
        System.out.println("Maneger's Bonus: "+bonus);
        System.out.println("Maneger's Salary: "+(salary+bonus));
    }
}

public class p3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Employee name: ");
        Employee o1Employee = new Employee(sc.nextLine(), 40000.0);

        System.out.print("Enter Manager name: ");
        Manager o1Manager = new Manager(sc.nextLine(), 40000.0, 10000.0);
        
        o1Employee.DisplaySalary();
        o1Manager.DisplaySalary();

        sc.close();
    }
}
