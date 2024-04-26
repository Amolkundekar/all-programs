import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class TemperatureConverterApp extends JFrame {
    private JTextField inputField;
    private JLabel resultLabel;

    public TemperatureConverterApp() {
        setTitle("Temperature Converter");
        setSize(300, 150);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create components
        JLabel inputLabel = new JLabel("Enter Temperature (celcius):");
        inputField = new JTextField(10);
        JButton convertButton = new JButton("Convert");
        resultLabel = new JLabel("Result:");

        // Set layout
        setLayout(new BoxLayout(getContentPane(), BoxLayout.Y_AXIS));

        // Add components to the frame
        add(inputLabel);
        add(inputField);
        add(convertButton);
        add(resultLabel);

        // Add action listener to the convert button
        convertButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                convertTemperature();
            }
        });
    }

    private void convertTemperature() {
        try {
            // Get temperature value from the input field
            double inputTemperature = Double.parseDouble(inputField.getText());

            // Convert Celsius to Fahrenheit
            double result = (inputTemperature * 9 / 5) + 32;

            // Display the result
            resultLabel.setText("Result: " + result + " Fahrenheit");
        } catch (NumberFormatException ex) {
            // Handle the case where the input is not a valid number
            resultLabel.setText("Result: Invalid input");
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new TemperatureConverterApp().setVisible(true);
            }
        });
    }
}
