package com.demo.test;

import java.util.List;
import java.util.Scanner;
import com.demo.beans.Employee;
import com.demo.service.EmployeeService;
import com.demo.service.EmployeeServiceImpl;

public class TestEmployeeManagementSystem {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        EmployeeService eservice = new EmployeeServiceImpl();
        int choice;

        do {
            System.out.println("\n=== Employee Management Menu ===");
            System.out.println("1. Add new employee");
            System.out.println("2. Display all employees");
            System.out.println("3. Search by ID");
            System.out.println("4. Search by name");
            System.out.println("5. Display all employees sorted by ID");
            System.out.println("6. Delete by ID");
            System.out.println("7. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            sc.nextLine(); // consume newline

            switch (choice) {
                case 1 -> {
                    System.out.print("Enter Employee ID: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter Employee Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Employee Role: ");
                    String role = sc.nextLine();
                    Employee emp = new Employee(id, name, role);
                    boolean status = eservice.addNewEmployee(emp);
                    System.out.println(status ? "Employee added successfully." : "Failed to add employee.");
                }
                case 2 -> {
                    List<Employee> list = eservice.displayAll();
                    if (list.isEmpty()) System.out.println("No employees to display.");
                    else list.forEach(System.out::println);
                }
                case 3 -> {
                    System.out.print("Enter Employee ID to search: ");
                    int id = sc.nextInt();
                    Employee emp = eservice.searchById(id);
                    System.out.println(emp != null ? emp : "Employee not found.");
                }
                case 4 -> {
                    System.out.print("Enter Employee Name to search: ");
                    String name = sc.nextLine();
                    List<Employee> list = eservice.findByName(name);
                    if (list != null && !list.isEmpty()) list.forEach(System.out::println);
                    else System.out.println("Employee not found.");
                }
                case 5 -> {
                    List<Employee> list = eservice.displayAllSortedById();
                    if (list.isEmpty()) System.out.println("No employees to display.");
                    else list.forEach(System.out::println);
                }
                case 6 -> {
                    System.out.print("Enter Employee ID to delete: ");
                    int id = sc.nextInt();
                    boolean status = eservice.deleteById(id);
                    System.out.println(status ? "Employee deleted successfully." : "Employee not found.");
                }
                case 7 -> {
                    System.out.println("Exiting... Thank you!");
                    sc.close();
                }
                default -> System.out.println("Invalid choice. Please try again.");
            }

        } while (choice !=7);
    }
}
