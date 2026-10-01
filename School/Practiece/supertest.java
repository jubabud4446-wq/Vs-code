package School.Practiece;

class Parent{
    int x = 10;
    void display()
    {
        System.out.println("Parent class method");
    }
}

class Child extends Parent{
    int x = 20;
    void show()
    {
        System.out.println("Child class variable x: "+x);
        System.out.println("Parent class variable x: "+super.x);
        super.display();
    }
}

public class supertest {
    public static void main(String[] args) {
        Child o1 = new Child();
        o1.show();
    }
}
