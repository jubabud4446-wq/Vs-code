package JAVA.Lab.PDF5;

class Employee{
    private String empId;
    private String name;
    private double basicSalary;

    public void set_empID(String id)
    {
        empId = id;
    }
    public void set_name(String name)
    {
        this.name = name;
    }
    public void set_basicSalary(double basicSalary)
    {
        this.basicSalary = basicSalary;
    }
    public void get_name()
    {
        System.out.println("Name = " +name);
    }
    public void get_empID()
    {
        System.out.println("ID = " +empId);
    }
    public void get_basicSalary()
    {
        System.out.println("Salary = " +basicSalary);
    }
}

public class p4 {
    public static void main(String[] args) {
        Employee o1 = new Employee();
        o1.set_name("asad");
        o1.set_empID("b240101006");
        o1.set_basicSalary(121121);
        o1.get_name();
        o1.get_empID();
        o1.get_basicSalary();
    }
}