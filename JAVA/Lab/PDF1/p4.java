package JAVA.Lab.PDF1;

import java.util.Scanner;

public class p4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        sc.close();

        if (num < 2) {
            System.out.println(num + " is not Prime");
            return;
        }

        if (num == 2) {
            System.out.println(num + " is Prime");
            return;
        }

        if (num % 2 == 0) {
            System.out.println(num + " is not Prime");
            return;
        }

        for (int i = 3; i <= num / 2; i++) {
            if (num % i == 0) {
                System.out.println(num + " is not Prime");
                return;
            }
        }

        System.out.println(num + " is Prime");
    }
}