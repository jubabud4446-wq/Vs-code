package JAVA.HW.Object;

class rectangle{
    double length;
    double width;
    double area;

    rectangle()
    {
        length = 1;
        width = 1;
    }

    rectangle(double a, double b)
    {
        length = a;
        width = b;
    }

    void get_info()
    {
        area = length*width;
        System.out.println("Area = "+area);
    }
}

public class p2 {
    public static void main(String[] args) {
        rectangle o1 = new rectangle();
        rectangle o2 = new rectangle(5, 2);

        o1.get_info();
        o2.get_info();
    }
}
