package JAVA.HW.Object;

import java.util.Scanner;

class book{
    String title;
    int price;

    book(String name, int p)
    {
        title = name;
        price = p;
    }

    void display_info()
    {
        System.out.print("Title: "+title+"   Price = "+price);
    }
}

public class p4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int totalPrice = 0;

        System.out.print("Enter number of Books = ");
        int books = sc.nextInt();

        book[] b = new book[3];

        for(int i = 0; i < books; i++)
        {
            System.out.print("Enter Name = ");
            String name = sc.nextLine();
            sc.nextLine();

            System.out.print("Enter Price = ");
            int p = sc.nextInt();
            sc.nextLine();

            b[i] = new book(name, p);

            totalPrice += p;

            b[i].display_info();
            System.out.println();
        }

        System.out.println("Total = "+totalPrice);

        sc.close();
    }
}
