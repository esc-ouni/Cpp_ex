#include "PmergeMe.hpp"

double spent_time(time_t &raw_value){
    // convert to us (microseconds)
    return (1);
}

void print_input(int argc, char *argv[]){
    for (size_t i = 1; i < argc; i++){
        std::cout << "<"<< argv[i] << ">, ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]){
    time_t n, n1;
    std::list<unsigned int>   list;
    std::deque<unsigned int>  deque;
    std::vector<unsigned int> vector;

    try{
        __init(argc, argv, deque);
        n  = run_using_vector(deque, vector);
        n1 = run_using_list(deque, list);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }

    // std::cout << "=> List   :"<< std::endl;
    // print(list);
    // std::cout << std::endl << "=> Vector :"<< std::endl;
    // print(vector);
    
    std::cout << "Before : ";
    print(deque);
    std::cout << "After  : ";
    print(vector);
    std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << spent_time(n) << " µs" << std::endl;
    std::cout << "Time to process a range of " << list.size()   << " elements with std::list   : " << spent_time(n1) << " µs" << std::endl;
    return 0;
}
