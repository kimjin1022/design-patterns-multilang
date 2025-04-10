#include <iostream>
using namespace std;

class InternalClass {
public:
    string fetch() { return "get user info"; }
};

class ExternalClass {
public:
    string search() { return "get user info"; }
};

class Adapter {
    ExternalClass* external;

public:
    Adapter(ExternalClass* ext) : external(ext) {}
    string fetch() { return external->search(); }
};

int main() {
    ExternalClass ext;
    Adapter adapter(&ext);
    cout << adapter.fetch() << endl;
    return 0;
}