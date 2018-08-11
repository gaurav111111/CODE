package AWT_swing;

import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;


public class dem extends JFrame implements ActionListener {
JTextField t1,t2;
JLabel output;
	dem(){
	initComponents();
	}
	
	private void initComponents(){
		setSize(500,500);
		setLayout(null);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setResizable(false);
		
		JLabel l1=new JLabel("Enter First Number");
		l1.setBounds(40, 30, 150, 30);
		add(l1);
		t1=new JTextField();
		t1.setBounds(220, 30, 150, 30);
		add(t1);
		
		JLabel l2=new JLabel("Enter Second Number");
		l2.setBounds(40, 70, 150, 30);
		add(l2);
		t2=new JTextField();
		t2.setBounds(220, 70, 150, 30);
		add(t2);
		
		JButton add=new JButton("ADD");
		add.setBounds(40, 180, 100, 30);
		add(add);
		add.addActionListener(this);
		
		JButton sub=new JButton("SUB");
		sub.setBounds(150, 180, 100, 30);
		add(sub);
		sub.addActionListener(this);
		JButton mul=new JButton("MUL");
		mul.setBounds(260, 180, 100, 30);
		add(mul);
		mul.addActionListener(this);
		
		JButton div=new JButton("DIV");
		div.setBounds(370, 180, 100, 30);
		add(div);
		div.addActionListener(this);
		
		output=new JLabel();
		output.setBounds(150, 280, 100, 30);
		add(output);
		
	
	}
	
public static void main(String[] args) {
	new dem().setVisible(true);
}

@Override
public void actionPerformed(ActionEvent e) {
	JButton b=(JButton)e.getSource();
	
	String first=t1.getText();
	String second=t2.getText();
	
	int i=Integer.parseInt(first);
	int j=Integer.parseInt(second);
	
	switch (b.getText()) {
	case "ADD":
		output.setText(String.valueOf(i+j));
		break;

	case "SUB":
		output.setText(String.valueOf(i-j));
		break;

	case "MUL":
		output.setText(String.valueOf(i*j));
		break;

	case "DIV":
		output.setText(String.valueOf(i/j));
		break;
	}
	
}

}
