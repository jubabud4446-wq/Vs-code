package JAVA.Lab.PDF5;

class Rectangle{
    private double length;
    private double width;

    public double get_area()
    {
        return length*width;
    }
    public void set_length(double length)
    {
        this.length = length;
    }
    public void set_width(double width)
    {
        this.width = width;
    }
}

public class p3 {
    public static void main(String[] args) {
        Rectangle o1 = new Rectangle();
        o1.set_length(5);
        o1.set_width(2);
        System.out.println("Area: " +o1.get_area());
    }
}
