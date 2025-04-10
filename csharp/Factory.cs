using System;

interface IAnimal {
    string Speak();
}

class Dog : IAnimal {
    public string Speak() => "Woof!";
}

class Cat : IAnimal {
    public string Speak() => "Meow!";
}

class AnimalFactory {
    public IAnimal CreateAnimal(string type) {
        switch (type) {
            case "dog":
                return new Dog();
            case "cat":
                return new Cat();
            default:
                return null;
        }
    }
}

class Program {
    static void Main() {
        var factory = new AnimalFactory();
        var dog = factory.CreateAnimal("dog");
        var cat = factory.CreateAnimal("cat");
        Console.WriteLine(dog.Speak());
        Console.WriteLine(cat.Speak());
    }
}