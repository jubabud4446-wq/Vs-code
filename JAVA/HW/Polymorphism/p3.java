package JAVA.HW.Polymorphism;

class Employee{
    String name;
    double salary;

    Employee(String n, double s)
    {
        name = n;
        salary = s;
    }

    void display_salary()
    {
        System.out.print("Salary = "+salary);
    }
}

class Maneger extends Employee{

    double bonous;


    Maneger(String n, double s, double b)
    {
        bonous = b;
        super(n,s);
    }

    void display_salary()
    {
        salary += bonous;
        System.out.print("Bonus = "+bonous);
        System.out.print("Salary = " +salary);
    }
}

public class p3 {

    public static void main(String[] args) {
        Maneger m = new Maneger("Jubaer", 40000, 10000);
        m.display_salary();
    }
}
