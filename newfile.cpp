#include <iostream>
using namespace std;
class Base { public:
    int var_;
    void func(int){cout<<"Base\n";}
};
class Derived: public Base { public:
    int varD_;
    void func(int){cout<<"Derived\n";}
};
int main() {
    Derived d;   
    d.func(1);   
    return 0;
}