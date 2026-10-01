package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p3 {
    public static void main(String[] args) {
        int size, key, index = -1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        size = sc.nextInt();
        int ele[] = new int[size];
        System.out.print("Enter elements: ");
        for(int i = 0; i < size; i++)
        {
            ele[i] = sc.nextInt();
        }
        System.out.print("Enter key: ");
        key = sc.nextInt();

        sc.close();

        for(int i = 0; i < size; i++)
        {
            if(key == ele[i])
                index = i;
        }

        if(index == -1)
            System.out.println("Not found");
        else
            System.out.println("Element found at index: "+index);
    }
}
