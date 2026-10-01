package JAVA.Lab.PDF1;

import java.util.Scanner;

public class p2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter three numbers: ");
        int n1, n2, n3;
        n1 = sc.nextInt();
        n2 = sc.nextInt();
        n3 = sc.nextInt();
        sc.close();
        if(n1 > n2 && n1 > n3)
            System.out.println("Largest: "+n1);
        else if(n2 > n1 && n2 > n3)
            System.out.println("Largest: "+n2);
        else
            System.out.println("Largest: "+n3);
    }
}
