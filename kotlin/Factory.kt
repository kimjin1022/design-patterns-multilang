interface Animal {
    fun speak(): String
}

class Dog : Animal {
    override fun speak() = "Woof!"
}

class Cat : Animal {
    override fun speak() = "Meow!"
}

class AnimalFactory {
    fun createAnimal(type: String): Animal? {
        return when (type) {
            "dog" -> Dog()
            "cat" -> Cat()
            else -> null
        }
    }
}

fun main() {
    val factory = AnimalFactory()
    val dog = factory.createAnimal("dog")
    val cat = factory.createAnimal("cat")
    println(dog?.speak())
    println(cat?.speak())
}