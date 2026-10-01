package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter rows and columns: ");
        int row = sc.nextInt();
        int col = sc.nextInt();

        int mat[][] = new int[row][col];

        System.out.print("Matrix: ");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                mat[i][j] = sc.nextInt();
            }
        }

        sc.close();

        System.out.println("Transpose:");
        for(int i=0; i<col; i++)
        {
            for(int j=0; j<row; j++)
            {
                System.out.print(mat[j][i]+ " ");
            }
            System.out.println();
        }
    }
}