package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int largest, smallest, size;
        System.out.print("Enter Size: ");
        size = sc.nextInt();
        System.out.print("Enter elements: ");
        int arr[] = new int[size];

        for(int i = 0; i < size; i++)
        {
            arr[i] = sc.nextInt();
        }

        largest = arr[0];
        smallest = arr[0];

        for(int i = 1; i < size; i++)
        {
            if(arr[i] > largest)
                largest = arr[i];

            if(arr[i] < smallest)
                smallest = arr[i];
        }
        
        System.out.println("Largest: " +largest);
        System.out.println("Smallest: " +smallest);

        sc.close();
    }
}