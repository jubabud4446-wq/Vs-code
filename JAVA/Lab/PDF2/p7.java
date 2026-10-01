package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        boolean is_pal = true;

        System.out.print("Enter a string: ");
        String s = sc.nextLine().toLowerCase();

        for (int i = 0; i < s.length() / 2; i++) {
            if (s.charAt(i) != s.charAt(s.length() - 1 - i)) {
                is_pal = false;
                break;
            }
        }

        if (is_pal)
            System.out.println(s + " is a palindrome");
        else
            System.out.println(s + " is not a palindrome");

        sc.close();
    }
}