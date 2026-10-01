package JAVA.Lab.PDF2;

import java.util.Scanner;

public class p4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter row: ");
        int row = sc.nextInt();
        System.out.print("Enter coloumns: ");
        int col = sc.nextInt();
        int mat_A[][] = new int[row][col];
        int mat_B[][] = new int[row][col];
        int mat_sum[][] = new int[row][col];

        System.out.print("Matrix A: ");
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                mat_A[i][j] = sc.nextInt();
            }
        }

        System.out.print("Matrix B: ");
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                mat_B[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                mat_sum[i][j] = mat_A[i][j] + mat_B[i][j];
            }
        }

        System.out.println("Sum Matrix:");
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print(mat_sum[i][j]+ " ");
            }
            System.out.println();
        }

        sc.close();
    }
}