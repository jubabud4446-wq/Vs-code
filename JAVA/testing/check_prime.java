package JAVA.testing;

import java.util.Scanner;

public class check_prime {

    public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);
        sc.close();
        int num = sc.nextInt();

        if (num <= 1)
        {
            System.out.println("Not Prime");
            return;
        }

        if (num <= 3)
        {
            System.out.println("Prime");
            return;
        }

        if (num % 2 == 0 || num % 3 == 0)
        {
            System.out.println("Not Prime");
            return;
        }

        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                System.out.println("Not Prime");
                return;
            }
        }

        System.out.println("Prime");

        
    }
}