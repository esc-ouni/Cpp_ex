#include "Span.hpp"

int main(){
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    try {
        std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }

    try {
        std::cout << "longest Span  : " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }

    try {
        sp.addNumber(13);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    Span largeSpan(500);
    for (int i = 0; i < 500; ++i) {
        largeSpan.addNumber(rand());
    }

    try {
        std::cout << "Shortest Span : " << largeSpan.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }

    try {
        std::cout << "longest Span  : " << largeSpan.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }

    Span emptySpan(10);
    Span oneElementSpan(10);

    oneElementSpan.addNumber(42);

    try {
        std::cout << "Empty Span Shortest Span : " << emptySpan.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }

    try {
        std::cout << "One Element Span Shortest Span: " << oneElementSpan.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }

    

    return 0;
}