import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class KeyEventMouseEvents extends JFrame implements KeyListener, MouseListener {

    private JLabel label;

    public KeyEventMouseEvents() {
        // Set frame properties
        setTitle("Key and Mouse Events Demo");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create label
        label = new JLabel("Press a key or click the mouse!");
        label.setHorizontalAlignment(JLabel.CENTER);
        add(label);

        // Add key and mouse listeners
        addKeyListener(this);
        addMouseListener(this);

        // Set focusable to true for key events to work
        setFocusable(true);
    }

    // KeyListener methods
    public void keyTyped(KeyEvent e) {
        label.setText("Key Typed: " + e.getKeyChar());
    }

    public void keyPressed(KeyEvent e) {
        label.setText("Key Pressed: " + e.getKeyChar());
    }

    public void keyReleased(KeyEvent e) {
        // Do something if needed
    }

    // MouseListener methods
    public void mouseClicked(MouseEvent e) {
        label.setText("Mouse Clicked at (" + e.getX() + ", " + e.getY() + ")");
    }

    public void mousePressed(MouseEvent e) {
        // Do something if needed
    }

    public void mouseReleased(MouseEvent e) {
        // Do something if needed
    }

    public void mouseEntered(MouseEvent e) {
        // Do something if needed
    }

    public void mouseExited(MouseEvent e) {
        // Do something if needed
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            KeyEventMouseEvents demo = new KeyEventMouseEvents();
            demo.setVisible(true);
        });
    }
}
