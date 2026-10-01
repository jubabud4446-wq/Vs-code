package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int size = sc.nextInt();
        System.out.print("Enter elements: ");
        int arr[] = new int[size];
        int sum = 0;
        double avg = 0;
        for(int i = 0; i < size; i++)
        {
            arr[i] = sc.nextInt();
            sum += arr[i];
        }
        avg = sum / size;

        System.out.println("Sum: " +sum);
        System.out.println("Average: " +avg);

        sc.close();
    }
}
