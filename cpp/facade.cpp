#include <iostream>
using namespace std;

class CPU {
public:
    void process() { cout << "CPU 처리 중\n"; }
};

class Memory {
public:
    void load() { cout << "메모리 로딩 중\n"; }
};

class SSD {
public:
    void read() { cout << "SSD 드라이브 읽는 중\n"; }
};

class Computer {
    CPU cpu;
    Memory memory;
    SSD ssd;

public:
    void boot() {
        ssd.read();
        memory.load();
        cpu.process();
    }
};

int main() {
    Computer c;
    c.boot();
    return 0;
}