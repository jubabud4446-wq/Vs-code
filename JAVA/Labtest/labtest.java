package JAVA.Labtest;

import java.util.Scanner;

// a
class Employee {
    String name;
    int emp_id;
    double salary;

    Employee(String n, int id, double s) {
        name = n;
        emp_id = id;
        salary = s;
    }

    void show_info() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + emp_id);
        System.out.println("Salary: " +salary);
    }

    double bonus() {
        return salary * 0.05;
    }
}

// b
class Manager extends Employee {
    int team_size;

    Manager(String n, int id, double s, int ts) {
        super(n, id, s);
        team_size = ts;
    }

    double bonus() {
        return salary * 0.10 + team_size * 500;
    }

    void show_info()
    {
        super.show_info();
        System.out.println("Bonus: "+bonus());
        System.out.println("Total salary: "+(salary+bonus()));
        System.out.println();
    }

}

// c
class Developer extends Employee {
    String Programming_language;

    Developer(String n, int id, double s, String l) {
        super(n, id, s);
        Programming_language = l;
    }

    void show_info()
    {
        super.show_info();
        System.out.println("Bonus: "+bonus());
        System.out.println("Programming language: "+Programming_language);
        System.out.println();
    }
}

public class labtest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // d
        String m_name, d_name;
        int m_id, d_id;
        double m_s, d_s;
        int m_ts;
        String d_p_l;

        System.out.print("Enter Manager name: ");
        m_name = sc.nextLine();

        System.out.print("Enter Manager id: ");
        m_id = sc.nextInt();

        System.out.print("Enter salary: ");
        m_s = sc.nextDouble();

        System.out.print("Enter manager team size: ");
        m_ts = sc.nextInt();

        sc.nextLine();

        Manager o1Manager = new Manager(m_name, m_id, m_s, m_ts);

        System.out.print("Enter Developer name: ");
        d_name = sc.nextLine();

        System.out.print("Enter Developer id: ");
        d_id = sc.nextInt();

        System.out.print("Enter salary: ");
        d_s = sc.nextDouble();

        sc.nextLine();

        System.out.print("Enter Developer's Programming Language: ");
        d_p_l = sc.nextLine();

        Developer o1Developer = new Developer(d_name, d_id, d_s, d_p_l);

        System.out.println();
        o1Manager.show_info();
        o1Developer.show_info();

        sc.close();
    }
}