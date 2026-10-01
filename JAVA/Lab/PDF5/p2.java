package JAVA.Lab.PDF5;

class Student{
    private String name;
    private double marks;

    public String getName()
    {
        return name;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setMarks(double m)
    {
        if(m < 0 || m > 100)
        {
            System.out.println("Error");
        }
        else
            marks = m;
    }
    public double getMarks()
    {
        return marks;
    }
}

public class p2 {
    public static void main(String[] args) {
        Student o1Student = new Student();
        o1Student.setName("asdasda");
        o1Student.setMarks(222);
        o1Student.setMarks(-23);
        o1Student.setMarks(89);
        System.out.println("Name: " +o1Student.getName());
        System.out.println("Marks; " +o1Student.getMarks());
    }
}
