package JAVA.HW.Polymorphism;

class Animal{
    void make_sound()
    {
        System.out.println("Animalls make sounds");
    }
}

class dog extends Animal{
    void make_sound()
    {
        System.out.println("Dog Bark!!");
    }
}

public class p1 {
    public static void main(String[] args) {
        Animal o1 = new Animal();
        dog o2Dog = new dog();

        o1.make_sound();
        o2Dog.make_sound();
    }
}
