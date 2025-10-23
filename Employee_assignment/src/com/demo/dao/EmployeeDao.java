package com.demo.dao;

import java.util.List;
import com.demo.beans.Employee;

public interface EmployeeDao {

    
    boolean save(Employee e);


    boolean removeById(int eid);


    List<Employee> findAll();

  
    List<Employee> findAllSortedById();


    Employee findById(int eid);


    List<Employee> findByName(String nm);


    boolean saveToFile(String filename);
}
