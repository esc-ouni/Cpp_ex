#include <iostream>

class BaseClass {
private:
    int privateMember;

public:
    void setPrivateMember(int value){
        privateMember = value;
    }

    int getPrivateMember(){
        return privateMember;
    }
};

class DerivedClass : private BaseClass {
public:
    void print(){
        this->setPrivateMember(42);
        std::cout << this->getPrivateMember() << std::endl;
    }
};

class DerivedClass2 : private DerivedClass {
    public:
    void dv2(){
        this->print();
    };
};

int main() {
    DerivedClass obj;
    DerivedClass2 obj2;
    obj.print();
    obj2.dv2();
    return 0;
}
