#include "Serializer.hpp"

int main(int argc, char const *argv[]){
    (void)argc;
    (void)argv;
    std::cout << "Serializer !" << std::endl;

    Data *ptr = new(std::nothrow) Data;
    uintptr_t serlize;

    if (ptr){
        ptr->str = "vice versa !";

        std::cout << "ptr add                 : " << ptr << std::endl;

        serlize = Serializer::serialize(ptr);

        std::cout << "serlize value           : " << serlize << std::endl;
        ptr = NULL;
        ptr = Serializer::deserialize(serlize);

        std::cout << "ptr deserlize add       : " << ptr << std::endl;
        std::cout << "deserialzed ptr content : " << ptr->str << std::endl;
    }
    delete ptr;
    return (0);
}
