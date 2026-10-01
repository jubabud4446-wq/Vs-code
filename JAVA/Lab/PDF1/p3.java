package JAVA.Lab.PDF1;

import java.util.Scanner;

public class p3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        sc.close();

        int sum = 0;
        int re = 0;

        while(num != 0){
            re = num % 10;
            sum += re;
            num /= 10;
        }

        System.out.println("Sum of digits: " +sum);
    }
}
