package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine().toLowerCase();

        sc.close();

        int n_vowels = 0;
        String vowels = "aeiou";

        for(int i = 0; i < s.length(); i++)
        {
            for(int j = 0; j<vowels.length(); j++)
            {
                if(s.charAt(i) == vowels.charAt(j))
                    n_vowels++;
            }
        }

        int n_cons = s.length() - n_vowels;

        System.out.println("Vowels: "+n_vowels);
        System.out.println("Consonants: "+n_cons);
    }
}
