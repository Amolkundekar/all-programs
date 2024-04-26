import arithmetic.ArithmeticOperations;
import statistics.StatisticalOperations;
import trigonometry.TrigonometricOperations;

public class Main {
    public static void main(String[] args) {
        double result = ArithmeticOperations.add(5, 3);
        System.out.println("5 + 3 = " + result);

        double[] data = { 1, 2, 3, 4, 5 };
        double mean = StatisticalOperations.mean(data);
        System.out.println("Mean: " + mean);

        double[] angles = { Math.PI / 4, Math.PI / 3, Math.PI / 6 };
        double sineValue = TrigonometricOperations.sine(angles[0]);
        System.out.println("Sine of π/4: " + sineValue);
    }
}
