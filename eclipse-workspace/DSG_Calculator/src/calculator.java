import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class calculator {

    // Main frame and components
    private static final Frame frm = new Frame("DSG Calculator");
    private static final Label display = new Label("0", Label.RIGHT);
    private static final Label title = new Label("DSG Calculator", Label.CENTER);

    public static void main(String[] args) {
        setupFrame();
        setupDisplay();
        setupTitle();
        addPanels();
        frm.setVisible(true);

        frm.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
    }

    private static void setupFrame() {
        frm.setLayout(null);
        frm.setSize(600, 400);
        frm.setBackground(new Color(238, 238, 238));
        frm.setLocation(1000, 150);
    }

    private static void setupDisplay() {
        display.setBounds(45, 50, 365, 70);
        display.setBackground(new Color(255, 175, 176));
        display.setForeground(Color.BLACK);
        display.setFont(new Font("Serif", Font.BOLD, 32));
        frm.add(display);
    }

    private static void setupTitle() {
        title.setBounds(415, 70, 180, 30);
        title.setBackground(new Color(238, 238, 238));
        title.setForeground(new Color(26, 41, 70));
        title.setFont(new Font("Serif", Font.BOLD | Font.ITALIC, 18));
        frm.add(title);
    }

    private static void addPanels() {
        frm.add(createNumberPanel());
        frm.add(createZeroPanel());
        frm.add(createDotPanel());
        frm.add(createOperatorPanel());
        frm.add(createEqualPanel());
        frm.add(createClearPanel());
    }

    private static Panel createNumberPanel() {
        Panel numberPanel = new Panel(new GridLayout(3, 3));
        numberPanel.setBounds(45, 150, 255, 150);
        for (int i = 1; i <= 9; i++) {
            JButton button = createButton(String.valueOf(i), new Font("Serif", Font.BOLD, 22));
            numberPanel.add(button);
        }
        return numberPanel;
    }

    private static Panel createZeroPanel() {
        Panel zeroPanel = new Panel(new GridLayout(1, 1));
        zeroPanel.setBounds(45, 300, 170, 50);
        JButton zeroButton = createButton("0", new Font("Serif", Font.BOLD, 22));
        zeroPanel.add(zeroButton);
        return zeroPanel;
    }

    private static Panel createDotPanel() {
        Panel dotPanel = new Panel(new GridLayout(1, 1));
        dotPanel.setBounds(215, 300, 85, 50);
        JButton dotButton = createButton(".", new Font("Serif", Font.BOLD, 22));
        dotPanel.add(dotButton);
        return dotPanel;
    }

    private static Panel createOperatorPanel() {
        Panel operatorPanel = new Panel(new GridLayout(4, 1));
        operatorPanel.setBounds(325, 150, 85, 200);
        String[] operators = {"+", "-", "x", "/"};
        for (String op : operators) {
            JButton button = createButton(op, new Font("Serif", Font.BOLD, 32));
            button.setForeground(Color.BLUE);
            operatorPanel.add(button);
        }
        return operatorPanel;
    }

    private static Panel createEqualPanel() {
        Panel equalPanel = new Panel(new GridLayout(1, 1));
        equalPanel.setBounds(445, 150, 120, 95);
        JButton equalButton = createButton("=", new Font("Serif", Font.BOLD, 40));
        equalButton.setForeground(Color.RED);
        equalPanel.add(equalButton);
        return equalPanel;
    }

    private static Panel createClearPanel() {
        Panel clearPanel = new Panel(new GridLayout(1, 1));
        clearPanel.setBounds(445, 255, 120, 95);
        JButton clearButton = createButton("Clear", new Font("Serif", Font.BOLD, 28));
        clearButton.setForeground(Color.RED);
        clearPanel.add(clearButton);
        return clearPanel;
    }

    private static JButton createButton(String text, Font font) {
        JButton button = new JButton(text);
        button.setFont(font);
        return button;
    }
}
