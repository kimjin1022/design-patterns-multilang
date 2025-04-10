class Person {
    var name: String = ""
    var age: Int = 0
    var address: String = ""

    fun introduce() {
        println("이름: $name, 나이: $age, 주소: $address")
    }
}

class PersonBuilder {
    private val person = Person()

    fun withName(name: String) = apply { person.name = name }
    fun withAge(age: Int) = apply { person.age = age }
    fun withAddress(address: String) = apply { person.address = address }

    fun build(): Person = person
}

fun main() {
    val person = PersonBuilder()
        .withName("홍길동")
        .withAge(20)
        .withAddress("양산시 부산대학로")
        .build()
    person.introduce()
}