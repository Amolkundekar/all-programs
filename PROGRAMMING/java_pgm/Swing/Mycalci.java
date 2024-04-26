import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Mycalci implements ActionListener{

    JFrame f;
    JTextField t;
    JButton b1, b2, b3, b4,b5,b6,b7,b8,b9,b0, badd, bsub, bdiv, bmul, beq,bdel, bdec, bclr;

    static double a= 0, b= 0, result = 0;
    static int operator = 0;

    Mycalci() {
        f = new JFrame("My Calculator");
        f.setVisible(true);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setBounds(20, 020, 300, 500);
        // f.setResizable(false);
        Font fo = new Font("Arial", Font.BOLD, 20);
        t = new JTextField();
        t.setFont(fo);
        t.setBackground(Color.BLACK);
        t.setForeground(Color.WHITE);
        t.setBounds(40,40, 200, 50);


        b1 = new JButton("1");
        b2 = new JButton("2");
        b3 = new JButton("3");
        b4 = new JButton("4");
        b5 = new JButton("5");
        b6 = new JButton("6");
        b7 = new JButton("7");
        b8 = new JButton("8");
        b9 = new JButton("9");
        b0 = new JButton("0");
        badd = new JButton("+");
        badd.setFont(fo);
        bsub = new JButton("-");
        bsub.setFont(fo);
        bmul = new JButton("*");
        bmul.setFont(fo);
        bdiv = new JButton("/");
        bdiv.setFont(fo);
        bdec = new JButton(".");
        bdec.setFont(fo);
        bdel = new JButton("#");
        bdel.setFont(fo);
        bclr = new JButton("C");
        bclr.setFont(fo);
        beq = new JButton("=");
        beq.setFont(fo);



        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
        b8.addActionListener(this);
        b9.addActionListener(this);
        b0.addActionListener(this);
        badd.addActionListener(this);
        bsub.addActionListener(this);
        bmul.addActionListener(this);
        bdiv.addActionListener(this);
        bdec.addActionListener(this);
        beq.addActionListener(this);
        bdel.addActionListener(this);
        bclr.addActionListener(this);

        f.add(t);
        f.add(b0);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.add(b6);
        f.add(b7);
        f.add(b8);
        f.add(b9);
        f.add(badd);
        f.add(bsub);
        f.add(bmul);
        f.add(bdiv);
        f.add(bclr);
        f.add(bdec);
        f.add(bdel);
        f.add(beq);
        // f.add();
        // f.add();
        b1.setBounds(40, 100,50 ,50);
        b2.setBounds(90, 100,50 ,50);
        b3.setBounds(140, 100,50 ,50);
        bdiv.setBounds(190, 100,50 ,50);

        b4.setBounds(40, 150,50 ,50);
        b5.setBounds(90, 150,50 ,50);
        b6.setBounds(140, 150,50 ,50);
        bmul.setBounds(190, 150,50 ,50);

        b7.setBounds(40, 200,50 ,50);
        b8.setBounds(90, 200,50 ,50);
        b9.setBounds(140, 200,50 ,50);
        bsub.setBounds(190, 200,50 ,50);

        bdec.setBounds(40, 250,50 ,50);
        b0.setBounds(90, 250,50 ,50);
        bdel.setBounds(140, 250,50 ,50);
        badd.setBounds(190, 250,50 ,50);

        bclr.setBounds(40, 300, 100, 50);
        beq.setBounds(140, 300, 100, 50);



    }

    public static void main(String[] args) {
        new Mycalci();
    }

    public void actionPerformed(ActionEvent e){
        if(e.getSource()==b1){
            t.setText(t.getText().concat("1"));
        }

        if(e.getSource()==b2){
            t.setText(t.getText().concat("2"));
        }

        if(e.getSource()==b3){
            t.setText(t.getText().concat("3"));
        }

        if(e.getSource()==b4){
            t.setText(t.getText().concat("4"));
        }

        if(e.getSource()==b5){
            t.setText(t.getText().concat("5"));
        }

        if(e.getSource()==b6){
            t.setText(t.getText().concat("6"));
        }

        if(e.getSource()==b7){
            t.setText(t.getText().concat("7"));
        }

        if(e.getSource()==b8){
            t.setText(t.getText().concat("8"));
        }

        if(e.getSource()==b9){
            t.setText(t.getText().concat("9"));
        }

        if(e.getSource()==b0){
            t.setText(t.getText().concat("0"));
        }

        if(e.getSource()==bdec){
            t.setText(t.getText().concat("."));
        }

        if(e.getSource()==badd){
            // t.setText(t.getText().concat("1"));
            a = Double.parseDouble(t.getText());
            operator = 1;
            t.setText("");
        }

        if(e.getSource()==bsub){
            // t.setText(t.getText().concat("1"));
            a = Double.parseDouble(t.getText());
            operator = 2;
            t.setText("");
        }

        if(e.getSource()==bmul){
            // t.setText(t.getText().concat("1"));
            a = Double.parseDouble(t.getText());
            operator = 3;
            t.setText("");
        }

        if(e.getSource()==bdiv){
            // t.setText(t.getText().concat("1"));
            a = Double.parseDouble(t.getText());
            operator = 4;
            t.setText("");
        }

        if(e.getSource()==beq){

            // t.setText(t.getText().concat("1"));
            b = Double.parseDouble(t.getText());
            switch(operator){
                case 1:
                result = a+b;
                break;

                case 2:
                result = a-b;
                break;

                case 3:
                result = a*b;
                break;

                case 4:
                result = a/b;
                break;

            }

            t.setText(""+result);
            // t.setText("");
        }

        if(e.getSource()==bclr){
            t.setText("");
            
        }

        if(e.getSource()==bdel){
           String s = t.getText();
           t.setText("");
           for(int i= 0; i<s.length()-1; i++){
                t.setText(t.getText()+s.charAt(i));
           }
        }
    }
}
