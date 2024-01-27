#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

Base::~Base(){
};

Base *generate(void){
    switch ((rand()%3)){
        case 2:
            std::cout << "A generated" << std::endl;
            return new(std::nothrow) A;
        case 1:
            std::cout << "B generated" << std::endl;
            return new(std::nothrow) B;
        case 0:
            std::cout << "C generated" << std::endl;
            return new(std::nothrow) C;
    }
    return NULL;
};

void identify(Base *p){
    if (dynamic_cast<A*>(p)){
        std::cout << "=> A Instance Detected" << std::endl; return;
    } else if (dynamic_cast<B*>(p)){
        std::cout << "=> B Instance Detected" << std::endl; return;

    } else if (dynamic_cast<C*>(p)){
        std::cout << "=> C Instance Detected" << std::endl; return;
    }
    else
        std::cout << "=> Instance Type Not Recognized !" << std::endl; return;
};

void identify(Base &p){
    try{
        p = dynamic_cast<A&>(p);
        std::cout << "=> A Instance Detected" << std::endl; return;
    }
    catch (...){
    } try{
        p = dynamic_cast<B&>(p);
        std::cout << "=> B Instance Detected" << std::endl; return;
    }
    catch (...){
    } try{
        p = dynamic_cast<C&>(p);    
        std::cout << "=> C Instance Detected" << std::endl; return;
    }
    catch (...){
        std::cout << "=> Instance Type Not Recognized !" << std::endl; return;
    }
};
