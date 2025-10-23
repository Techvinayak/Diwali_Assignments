package com.demo.service;

import java.util.List;
import com.demo.beans.Employee;

public interface EmployeeService {

   
    boolean addNewEmployee(Employee e);

    
    List<Employee> displayAll();

    
    List<Employee> displayAllSortedById();

    
    Employee searchById(int eid);

    
    boolean deleteById(int eid);

    
    List<Employee> findByName(String nm);
}
