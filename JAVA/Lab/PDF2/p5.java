package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int size = sc.nextInt();
        System.out.print("Matrix: ");
        int mat[][] = new int[size][size];

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                mat[i][j] = sc.nextInt();
            }
        }

        int p_sum = 0, s_sum = 0;

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(i == j)
                    p_sum += mat[i][j];

                if(i+j == size-1)
                    s_sum += mat[i][j];
            }
        }

        sc.close();

        System.out.println("Primary Diagonal Sum: " +p_sum);
        System.out.println("Secondary Diagonal Sum: " +s_sum);
    }
}
