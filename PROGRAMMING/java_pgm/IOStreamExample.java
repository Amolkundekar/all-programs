import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class IOStreamExample {
    public static void main(String[] args) {
        String inputFile = "input.txt";
        String outputFile = "output.txt";

        try {
            // Creating a FileReader to read from the input file
            FileReader fileReader = new FileReader(inputFile);
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            // Creating a FileWriter to write to the output file
            FileWriter fileWriter = new FileWriter(outputFile);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

            String line;

            // Read from the input file and write to the output file
            while ((line = bufferedReader.readLine()) != null) {
                bufferedWriter.write(line);
                bufferedWriter.newLine(); // Add a newline character
            }

            // Close the input and output streams
            bufferedReader.close();
            bufferedWriter.close();

            System.out.println("File copied successfully!");
        } catch (IOException e) {
            // Handle any IO exceptions
            System.err.println("An error occurred: " + e.getMessage());
        }
    }
}
