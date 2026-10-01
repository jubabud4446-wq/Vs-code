package JAVA.testing;

import java.util.Scanner;
public class sum_of_numbers {
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        int num = sc.nextInt();

        while(num != 0)
        {
            sum += num % 10;
            num = num / 10;
        }

        System.out.println(sum);
        sc.close();
    }
}
