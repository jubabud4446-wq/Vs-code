package JAVA.Lab.PDF1;
import java.util.Scanner;
public class p5 {
    public static void main(String[] args) {
        int num, temp;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        num = sc.nextInt();
        temp = num;
        sc.close();
        for(int i = num - 1; i > 0; i--)
        {
            num = num * i;
        }

        System.out.println("The factorial of " +temp+ " is " +num);
    }
}
