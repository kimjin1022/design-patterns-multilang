open class Coffee {
    open fun cost(): Int = 5
}

open class CoffeeDecorator(private val coffee: Coffee) : Coffee() {
    override fun cost(): Int = coffee.cost()
}

class MilkDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int = super.cost() + 2
}

class SugarDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int = super.cost() + 1
}

fun main() {
    val base = Coffee()
    val milk = MilkDecorator(base)
    val sugar = SugarDecorator(base)
    val both = SugarDecorator(milk)

    println(base.cost())   // 5
    println(milk.cost())   // 7
    println(sugar.cost())  // 6
    println(both.cost())   // 8
}