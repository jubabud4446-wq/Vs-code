package JAVA.Lab.PDF5;

class BankAccount
{
    private String accountHolder;
    private double balance;

    void getAccountHolder()
    {
        System.out.println("Name: " +accountHolder);
    }
    void getBalance()
    {
        System.out.println("Balance: " +balance);
    }
    void setBalance(double balance)
    {
        this.balance = balance;
    }
    void setAccountHolder(String accountHolder)
    {
        this.accountHolder = accountHolder; 
    }
}

public class p1 {
    public static void main(String[] args) {
        BankAccount o1Account = new BankAccount();
        o1Account.setBalance(1000.00);
        o1Account.setAccountHolder("asd");
        o1Account.getAccountHolder();
        o1Account.getBalance();
    }
}
