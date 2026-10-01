package JAVA.HW.Object;

import java.util.Scanner;

class BankAccount{
    private double balance;

    void deposit(double b)
    {
        balance += b;
        System.out.println("New Balance = "+balance);
    }

    void withdraw(double b)
    {
        if(b > balance)
        {
            System.out.println("INSUFFICIENT");
        }

        else
        {
            balance -= b;
            System.out.println("Balance = " +balance);
        }
    }

    BankAccount(double b)
    {
        balance = b;
    }

    void get_balance()
    {
        System.out.println("Balance = " +balance);
    }
}

public class p3 {
    public static void main(String[] args) {

        double b, w, d;

        Scanner sc = new Scanner(System.in);

        System.out.println();
        System.out.print("Enter balance = ");
        b = sc.nextDouble();

        BankAccount o1 = new BankAccount(b);

        System.out.print("Enter Deposit Ammount = ");
        d = sc.nextDouble();
        // System.out.println();

        System.out.print("Enter Withdraw Ammount = ");
        w = sc.nextDouble();
        System.out.println();

        o1.deposit(d);
        o1.withdraw(w);
        o1.get_balance();

        sc.close();
        
    }
}