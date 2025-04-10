#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Animal {
public:
    virtual string speak() = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    string speak() override { return "Woof!"; }
};

class Cat : public Animal {
public:
    string speak() override { return "Meow!"; }
};

class AnimalFactory {
public:
    unique_ptr<Animal> createAnimal(const string& type) {
        if (type == "dog") return make_unique<Dog>();
        else if (type == "cat") return make_unique<Cat>();
        else return nullptr;
    }
};

int main() {
    AnimalFactory factory;
    auto dog = factory.createAnimal("dog");
    auto cat = factory.createAnimal("cat");
    cout << dog->speak() << endl;
    cout << cat->speak() << endl;
    return 0;
}