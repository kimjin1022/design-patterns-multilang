class InternalClass {
    fun fetch() = "get user info"
}

class ExternalClass {
    fun search() = "get user info"
}

class Adapter(private val external: ExternalClass) {
    fun fetch(): String = external.search()
}

fun main() {
    val ext = ExternalClass()
    val adapter = Adapter(ext)
    println(adapter.fetch())
}