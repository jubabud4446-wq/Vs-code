package JAVA.HW.Object;
import java.util.Scanner;

class student{
    String name;
    int ID;
    double cgpa;

    void display_info()
    {
        System.out.println("Name = "+name);
        System.out.println("ID = "+ID);
        System.out.println("CGPA = "+cgpa);
    }
}

public class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        student o1 = new student();

        System.out.println("Enter Name = ");
        o1.name = sc.nextLine();

        System.out.println("Enter ID = ");
        o1.ID = sc.nextInt();

        System.out.println("Enter CGPA = ");
        o1.cgpa = sc.nextDouble();

        System.out.println();

        o1.display_info();

        sc.close();
    }
}