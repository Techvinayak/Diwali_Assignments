package Test;

import java.util.Scanner;

import Calculator.Calculator;
import Calculator.WrongOperatorException;

public class TestCalc {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();

        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();

        System.out.print("Enter operator (+, -, *, /, %): ");
        String operator = sc.next();

        try {
            int result = Calculator.calculate(num1, num2, operator);
            System.out.println("Result: " + result);
        } catch (WrongOperatorException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (ArithmeticException e) {
            System.out.println("Math Error: " + e.getMessage());
        }

        sc.close();
    }

}
