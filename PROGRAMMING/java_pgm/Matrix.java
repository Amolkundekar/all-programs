import java.util.Scanner;

class Matrix {
    public static void main(String[] args) {
        Scanner get = new Scanner(System.in);

        System.out.println("enter row of matrices");
        int rows = get.nextInt();
        System.out.println("enter column of matrices");
        int columns = get.nextInt();
        int[][] matrix1 = new int[rows][columns];

        int[][] matrix2 = new int[rows][columns];

        Methods mMethods = new Methods();

        System.out.println("enter first matrix elements(row wise)");
        for (int i = 0; i < rows; i++) {
            System.out.println();
            for (int j = 0; j < columns; j++) {

                matrix1[i][j] = get.nextInt();
            }
            
        }

        System.out.println("enter second matrix elements (row wise)");
        for (int i = 0; i < rows; i++) {
            System.out.println();
            for (int j = 0; j < columns; j++) {

                matrix2[i][j] = get.nextInt();
            }
            
        }

        mMethods.displayMatrix(matrix1, rows, columns);
        mMethods.displayMatrix(matrix2, rows, columns);

        mMethods.addMatrix(matrix1, matrix2, rows, columns);
        mMethods.subtractMatrix(matrix1, matrix2, rows, columns);
        mMethods.multiplicationMatrix(matrix1, matrix2, rows, columns);
    }

}

/* public */ class Methods {

    //function for addition of the matrices
    void addMatrix(int[][] m1, int[][] m2, int r, int c) {
        int[][] result = new int[r][c];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result[i][j] = m1[i][j] + m2[i][j];
            }
        }

        System.out.println("\nResult of sum is :");
        displayMatrix(result, r, c);
    }


    //function for subtraction of matrices
    void subtractMatrix(int[][] m1, int[][] m2, int r,int c) {
        int[][] result = new int[r][c];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result[i][j] = m1[i][j] - m2[i][j];
            }
        }

        System.out.println("\nResult of subtraction :");
        displayMatrix(result, r, c);
    }

    //function for multiplication of matrices 
    void multiplicationMatrix(int[][] m1, int[][] m2, int r, int c) {
        int[][] result = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                for (int k = 0; k < r; k++) {
                    result[i][j] = (m1[i][k] * m2[k][i]) + result[i][j];
                }
            }
        }
        System.out.println("\nResult of subtraction :");
        displayMatrix(result, r, c);
    }

    void displayMatrix(int[][] matrix, int rows, int columns) {
        System.out.println("==============\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

}