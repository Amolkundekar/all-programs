import java.io.*;

public class EnhancedIOStream{
    public static void main(String[] args) {
        String inputFile = "input.txt";
        String outputFile = "output.txt";
        String appendFile = "append.txt";

        try {
            // Copy data from the input file to the output file
            copyFile(inputFile, outputFile);
            System.out.println("File copied successfully!");

            // Append data to an existing file
            appendToFile(appendFile, "This is appended text.");
            System.out.println("Data appended to the file.");

            // Read from the output file
            String fileContents = readFile(outputFile);
            System.out.println("Contents of the output file:\n" + fileContents);
        } catch (IOException e) {
            System.err.println("An error occurred: " + e.getMessage());
        }
    }

    public static void copyFile(String sourceFile, String destinationFile) throws IOException {
        try (BufferedReader reader = new BufferedReader(new FileReader(sourceFile));
             BufferedWriter writer = new BufferedWriter(new FileWriter(destinationFile))) {

            String line;
            while ((line = reader.readLine()) != null) {
                writer.write(line);
                writer.newLine();
            }
        }
    }

    public static void appendToFile(String fileName, String textToAppend) throws IOException {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(fileName, true))) {
            writer.write(textToAppend);
            writer.newLine();
        }
    }

    public static String readFile(String fileName) throws IOException {
        StringBuilder fileContents = new StringBuilder();
        try (BufferedReader reader = new BufferedReader(new FileReader(fileName)) ) {
            String line;
            while ((line = reader.readLine()) != null) {
                fileContents.append(line);
                fileContents.append(System.lineSeparator());
            }
        }
        return fileContents.toString();
    }
}
