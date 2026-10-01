package JAVA.testing;

class Point
{
    int x;
    int y;
    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
    public void display()
    {
        System.out.println("Cordinates: (" +x+ ", " +y+ ")");
    }
}

public class quiz {
    public static void main(String[] args){
        Point p1 = new Point(10,20);
        Point p2 = p1;

        p1.display();
        p2.display();
    }    
}
