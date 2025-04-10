#include <iostream>
using namespace std;

class Coffee {
public:
    virtual int cost() { return 5; }
    virtual ~Coffee() = default;
};

class CoffeeDecorator : public Coffee {
protected:
    Coffee* coffee;

public:
    CoffeeDecorator(Coffee* c) : coffee(c) {}
    int cost() override { return coffee->cost(); }
};

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(Coffee* c) : CoffeeDecorator(c) {}
    int cost() override { return coffee->cost() + 2; }
};

class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(Coffee* c) : CoffeeDecorator(c) {}
    int cost() override { return coffee->cost() + 1; }
};

int main() {
    Coffee base;
    MilkDecorator milk(&base);
    SugarDecorator sugar(&base);
    SugarDecorator both(&milk);

    cout << base.cost() << endl;         // 5
    cout << milk.cost() << endl;         // 7
    cout << sugar.cost() << endl;        // 6
    cout << both.cost() << endl;         // 8

    return 0;
}