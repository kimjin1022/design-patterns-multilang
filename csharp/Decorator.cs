using System;

class Coffee {
    public virtual int Cost() => 5;
}

class CoffeeDecorator : Coffee {
    protected Coffee _coffee;

    public CoffeeDecorator(Coffee coffee) {
        _coffee = coffee;
    }

    public override int Cost() => _coffee.Cost();
}

class MilkDecorator : CoffeeDecorator {
    public MilkDecorator(Coffee coffee) : base(coffee) { }

    public override int Cost() => base.Cost() + 2;
}

class SugarDecorator : CoffeeDecorator {
    public SugarDecorator(Coffee coffee) : base(coffee) { }

    public override int Cost() => base.Cost() + 1;
}

class Program {
    static void Main() {
        var coffee = new Coffee();
        var milk = new MilkDecorator(coffee);
        var sugar = new SugarDecorator(coffee);
        var both = new SugarDecorator(milk);

        Console.WriteLine(coffee.Cost());      // 5
        Console.WriteLine(milk.Cost());        // 7
        Console.WriteLine(sugar.Cost());       // 6
        Console.WriteLine(both.Cost());        // 8
    }
}