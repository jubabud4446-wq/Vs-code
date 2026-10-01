package JAVA.Lab.PDF1;
import java.util.Scanner;

public class p9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int f_num = sc.nextInt();
        System.out.print("Enter second number: ");
        int s_num = sc.nextInt();
        System.out.print("Enter operation: ");
        char op = sc.next().charAt(0);
        sc.close();

        switch (op) {
            case '+':
                int ans = f_num + s_num;
                System.out.print("Result: " +ans);
                System.out.println();
                break;
            
            case '-':
                ans = f_num - s_num;
                System.out.print("Result: " +ans);
                System.out.println();
                break;

            case '*':
                ans = f_num * s_num;
                System.out.print("Result: " +ans);
                System.out.println();
                break;

            case '/':
                ans = f_num / s_num;
                System.out.print("Result: " +ans);
                System.out.println();
                break;
        }
    }
}
