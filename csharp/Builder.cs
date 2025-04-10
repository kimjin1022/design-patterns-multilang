using System;

class Person {
    public string Name;
    public int Age;
    public string Address;

    public void Introduce() {
        Console.WriteLine($"이름: {Name}, 나이: {Age}, 주소: {Address}");
    }
}

class PersonBuilder {
    private Person person = new Person();

    public PersonBuilder WithName(string name) {
        person.Name = name;
        return this;
    }

    public PersonBuilder WithAge(int age) {
        person.Age = age;
        return this;
    }

    public PersonBuilder WithAddress(string address) {
        person.Address = address;
        return this;
    }

    public Person Build() => person;
}

class Program {
    static void Main() {
        var person = new PersonBuilder()
                        .WithName("홍길동")
                        .WithAge(20)
                        .WithAddress("양산시 부산대학로")
                        .Build();
        person.Introduce();
    }
}