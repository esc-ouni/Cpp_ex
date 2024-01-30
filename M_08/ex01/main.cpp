#include "Span.hpp"

int main(){
    std::cout << "Span !" << std::endl;

    // size_t n = 7;

    // Span sp = Span(n);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(7);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // sp.addNumber(9);

    // for (size_t i = 0; i < n; i++){
    //     std::cout << sp.getNumber(i) << std::endl;
    // }
    

    // // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.longestSpan() << std::endl;

    return 0;
}