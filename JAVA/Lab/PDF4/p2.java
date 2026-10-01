package JAVA.Lab.PDF4;

class Animal{
    void makeSound()
    {
        System.out.println("Animal makes a sound.");
    }
}

class Dog extends Animal{
    void makeSound()
    {
        System.out.println("Dog barks.");
    }
}

public class p2 {
    public static void main(String[] args) {
        Animal o1Animal = new Animal();
        Dog o1dDog = new Dog();

        o1Animal.makeSound();
        o1dDog.makeSound();
    }
}