package com.demo.service;

import java.util.List;
import java.util.Scanner;

import com.demo.beans.Employee;
import com.demo.dao.EmployeeDao;
import com.demo.dao.EmployeeDaoImpl;

public class EmployeeServiceImpl implements EmployeeService {
    private EmployeeDao edao;

    
    public EmployeeServiceImpl() {
        edao = new EmployeeDaoImpl();
    }

    
    @Override
    public boolean addNewEmployee(Employee e) {
        return edao.save(e);
    }

    
    @Override
    public List<Employee> displayAll() {
        return edao.findAll();
    }

    
    @Override
    public List<Employee> displayAllSortedById() {
        return edao.findAllSortedById();
    }

    
    @Override
    public Employee searchById(int eid) {
        return edao.findById(eid);
    }

    
    @Override
    public boolean deleteById(int eid) {
        return edao.removeById(eid);
    }

    
    @Override
    public List<Employee> findByName(String nm) {
        return edao.findByName(nm);
    }
}
