#include "Base.hpp"

int main(){
    for (int i = 0; i < 20; i++) {
        Base *ptr = generate();
        if (ptr){
            Base &reff = *ptr;
            identify(ptr);
            identify(reff);
        }
        delete ptr;
    }
    return (0);
}
