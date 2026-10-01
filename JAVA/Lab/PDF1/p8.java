package JAVA.Lab.PDF1;

import java.util.Scanner;

public class p8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        sc.close();

        for(int i = 1; i <= 10; i++)
        {
            int ans = num * i;
            System.out.println(num+ " x " +i+ " = " +ans);
        }
    }
}
