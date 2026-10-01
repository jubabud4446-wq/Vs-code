package JAVA.Lab.PDF3;

import java.util.Scanner;

class BankAccount{
    private double balance;

    BankAccount(double b)
    {
        balance = b;
    }

    void deposit(double d)
    {
        balance += d;
        System.out.println("Deposit successful. Balance: "+balance);
    }

    void withdraw(double w)
    {
        if(w > balance)
            System.out.println("Unsuccessful");

        else
        {
            balance -= w;
            System.out.println("Withdrawal Successful. Balance: "+balance);
        }
    }

    void final_balance()
    {
        System.out.println("Final Balance: "+balance);
    }
}

public class p3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Initial Balance: ");
        double balance = sc.nextDouble();

        System.out.print("Deposit amount: ");
        double deposit = sc.nextDouble();

        System.out.print("withdraw ammount: ");
        double withdraw = sc.nextDouble();

        BankAccount person1Account = new BankAccount(balance);
        person1Account.deposit(deposit);
        person1Account.withdraw(withdraw);
        person1Account.final_balance();

        sc.close();
    }
}
