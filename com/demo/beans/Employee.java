package com.demo.beans;

public class Employee {
    private int empid;
    private String ename;
    private String role;

   
    public Employee() {
        super();
    }

    
    public Employee(int empid) {
        super();
        this.empid = empid;
    }

    
    public Employee(int empid, String ename, String role) {
        super();
        this.empid = empid;
        this.ename = ename;
        this.role = role;
    }

    
    @Override
    public boolean equals(Object obj) {
        System.out.println("in equals method " + this.empid + " ---- " + ((Employee)obj).empid);
        return this.empid == ((Employee)obj).empid;
    }

   
    public int getEmpid() {
        return empid;
    }

    public void setEmpid(int empid) {
        this.empid = empid;
    }

    public String getEname() {
        return ename;
    }

    public void setEname(String ename) {
        this.ename = ename;
    }

    public String getRole() {
        return role;
    }

    public void setRole(String role) {
        this.role = role;
    }

    
    @Override
    public String toString() {
        return "Employee [empid=" + empid + ", ename=" + ename + ", role=" + role + "]";
    }
}
