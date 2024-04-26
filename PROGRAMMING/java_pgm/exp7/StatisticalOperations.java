package statistics;
import java.util.Arrays;

public class StatisticalOperations {
    public static double mean(double[] numbers) {
        return Arrays.stream(numbers).average().orElse(0.0);
    }

    public static double median(double[] numbers) {
        Arrays.sort(numbers);
        int middle = numbers.length / 2;
        if (numbers.length % 2 == 0) {
            return (numbers[middle - 1] + numbers[middle]) / 2.0;
        } else {
            return numbers[middle];
        }
    }

    public static double standardDeviation(double[] numbers) {
        double mean = mean(numbers);
        double variance = Arrays.stream(numbers)
                .map(x -> Math.pow(x - mean, 2))
                .average()
                .orElse(0.0);
        return Math.sqrt(variance);
    }
}
