#include "ScalarConverter.hpp"

int main(int argc, char const *argv[]){
    
    if (argc != 2)
        exit(EXIT_FAILURE);

    ScalarConverter::convert(argv[1]);

    return (0);
}
