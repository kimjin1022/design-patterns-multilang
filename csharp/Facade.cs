using System;

class CPU {
    public void Process() => Console.WriteLine("CPU 처리 중");
}

class Memory {
    public void Load() => Console.WriteLine("메모리 로딩 중");
}

class SSD {
    public void Read() => Console.WriteLine("SSD 드라이브 읽는 중");
}

class Computer {
    private CPU cpu = new CPU();
    private Memory memory = new Memory();
    private SSD ssd = new SSD();

    public void Boot() {
        ssd.Read();
        memory.Load();
        cpu.Process();
    }
}

class Program {
    static void Main() {
        var c = new Computer();
        c.Boot();
    }
}