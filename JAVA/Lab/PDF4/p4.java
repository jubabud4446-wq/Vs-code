package JAVA.Lab.PDF4;
import java.util.Scanner;

class Person{
    String name;
    void displayName()
    {
        System.out.println("Name: "+name);
    }
}

class Student extends Person{
    int studentID;
    void Studentinfo()
    {
        System.out.println("ID: "+studentID);
    }
}

class GraduateStudent extends Student{
    String thesisTitle;
    void displayThesisInfo()
    {
        System.out.println("Title: "+thesisTitle);
    }
}

public class p4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        GraduateStudent person1 = new GraduateStudent();

        System.out.print("Enter name: ");
        person1.name = sc.nextLine();

        System.out.print("Enter Student ID: ");
        person1.studentID = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter thesis title: ");
        person1.thesisTitle = sc.nextLine();

        person1.displayName();
        person1.Studentinfo();
        person1.displayThesisInfo();

        sc.close();
    }
}
