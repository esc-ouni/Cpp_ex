#include "PmergeMe.hpp"

int main(int argc, char *argv[]){
    time_t n, n1;
    std::list<int>   list;
    std::deque<int>  deque;
    std::vector<int> vector;
    std::vector<int> vector2;

    try{
        __init(argc, argv, deque);
        n  = run_using_vector(deque, vector);
        n1 = run_using_vector_v2(deque, vector2);
        // n1 = run_using_list(deque, list);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }

    // std::cout << "Before        : ";
    // print(deque);
    // std::cout << "After w Jacob : ";
    // print(vector);
    // std::cout << "After         : ";
    // print(vector2);
    // // print(list);
    std::cout << "Time to process a range of " << vector.size() << " elements with Jacob : " << spent_time(n) << " µs" << std::endl;
    std::cout << "Time to process a range of " << vector2.size() << " elements without    : " << spent_time(n1) << " µs" << std::endl;

    // std::cout << "Time to process a range of " << list.size()   << " elements with std::list   : " << spent_time(n1) << " µs" << std::endl;
    return 0;
}
