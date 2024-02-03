#include "Span.hpp"

int main(){
    Span sp(5);

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
    std::cout << std::endl;

    Span emptySpan(10);
    Span oneElementSpan(10);

    oneElementSpan.addNumber(42);

    try {
        std::cout << "Empty Span Shortest Span      : " << emptySpan.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }

    try {
        std::cout << "One Element Span Shortest Span: " << oneElementSpan.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Err : " << e.what() << '\n';
    }
    std::cout << std::endl;

    std::vector<int> v;
    // v = {1, 2, 3, 4, 5};
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    Span span(5);
    sp.Ranges(v.begin(), v.end());

    for (int i = 0; i < 5; ++i){
        std::cout << "element [" << i << "] : " << sp.getNumber(i) << std::endl; 
    }
    

    return 0;
}