// import javax.swing.*;
// import java.awt.*;
// public class javaswing extends JFrame {

//     //frame construction using constructor
//     // public javaswing(){
//     //     setLayout(null);
//     //     setSize(400, 400);
//     //     setTitle("this is a title");
//     //     setVisible(true);

//     // }
//     public static void main(String[] args){
//         javaswing ns = new javaswing();
//         ns.setLayout(null);
//         ns.setSize(400, 400);
//         ns.setTitle("this is a title");
//         ns.setVisible(true);
//     }
// }

import javax.swing.*;

import org.w3c.dom.events.EventListener;

import java.awt.event.*;
import java.awt.*;

public class ButtonExample implements ActionListener {
    ButtonExample() {
        // JFrame f = new JFrame("Button Example");
        // JButton b = new JButton(new ImageIcon("img2.png"));
        // b.setBounds(100, 100, 100, 40);
        // f.add(b);
        // f.setSize(300, 400);
        // f.setLayout(null);
        // f.setVisible(true);
        // f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        // new ButtonExample();

        JFrame f = new JFrame("Button Example");
        JButton b = new JButton(new ImageIcon("img2.png"));
        b.setBounds(100, 100, 100, 40);
        f.add(b);
        f.setSize(300, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


        b.addActionListener(this);
    }

    public void ActionPerformed (ActionEvent e){
        f.getContentpane().setBa
    }
}