class CPU {
    fun process() = println("CPU 처리 중")
}

class Memory {
    fun load() = println("메모리 로딩 중")
}

class SSD {
    fun read() = println("SSD 드라이브 읽는 중")
}

class Computer {
    private val cpu = CPU()
    private val memory = Memory()
    private val ssd = SSD()

    fun boot() {
        ssd.read()
        memory.load()
        cpu.process()
    }
}

fun main() {
    val computer = Computer()
    computer.boot()
}