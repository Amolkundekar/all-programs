import java.text.DecimalFormat;
import java.util.Scanner;

class SavingAccount {
    static double interestRate;
    private static final DecimalFormat decfor = new DecimalFormat("0.00");

    static double monthlyInterest(double amount, int t) {
        double interest = (interestRate * amount * t) / 100;
        return interest / 12;
    }

    static void modify_ir(double r) {
        interestRate = r;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double r, a;
        int time;

        // Get initial interest rate from the user
        System.out.println("Enter the rate of interest per annum");
        interestRate = sc.nextDouble();

        // Get amount and time period from the user
        System.out.println("Enter the amount of loan");
        a = sc.nextDouble();
        System.out.println("Enter the time period in years");
        time = sc.nextInt();

        // Calculate and display monthly interest
        double ans = monthlyInterest(a, time);
        System.out.println("Your monthly interest is " + decfor.format(ans) + " Rs");

        // Get and set the modified interest rate
        System.out.println("Enter the new modified interest rate");
        r = sc.nextDouble();
        modify_ir(r);

        // Calculate and display monthly interest using the modified interest rate
        ans = monthlyInterest(a, time);
        System.out.println("\nYour monthly interest according to modified interest rate " + decfor.format(ans) + " Rs");

        sc.close();
    }
}