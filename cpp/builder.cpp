#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    string address;

    void introduce() const {
        cout << "이름: " << name << ", 나이: " << age << ", 주소: " << address << endl;
    }
};

class PersonBuilder {
    Person person;

public:
    PersonBuilder& withName(const string& name) {
        person.name = name;
        return *this;
    }

    PersonBuilder& withAge(int age) {
        person.age = age;
        return *this;
    }

    PersonBuilder& withAddress(const string& address) {
        person.address = address;
        return *this;
    }

    Person build() {
        return person;
    }
};

int main() {
    Person person = PersonBuilder()
        .withName("홍길동")
        .withAge(20)
        .withAddress("양산시 부산대학로")
        .build();
    
    person.introduce();
    return 0;
}