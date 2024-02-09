#include "PmergeMe.hpp"

int main(int argc, char *argv[]){
    clock_t n, n1, n2, n3, nt, nt2;
    std::deque<int>  Input;
    std::deque<int>  deque;
    std::vector<int> vector;

    try{
        __init(argc, argv, Input);

        n  = run_using_vector(Input, vector);
        vector.clear();
        n1 = run_using_vector(Input, vector);
        vector.clear();
        n2 = run_using_vector(Input, vector);
        vector.clear();
        n3 = run_using_vector(Input, vector);
       
        nt = ((double)(n1 + n2 + n3) / 3);

        n =  run_using_deque(Input, deque);
        deque.clear();
        n1 = run_using_deque(Input, deque);
        deque.clear();
        n2 = run_using_deque(Input, deque);
        deque.clear();
        n3 = run_using_deque(Input, deque);
        
        nt2 = ((double)(n1 + n2 + n3) / 3);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    std::cout << "Before : ";
    print(Input);
    std::cout << "After  : ";
    print(vector);
    std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << spent_time(nt) << " µs" << std::endl;
    std::cout << "Time to process a range of " << deque.size()  << " elements with std::deque  : " << spent_time(nt2) << " µs" << std::endl;
    // std::cout << "=> Input is sorted  : " << std::boolalpha << std::is_sorted(Input.begin(), Input.end()) << std::endl;
    // std::cout << "=> Vector is sorted : " << std::boolalpha << std::is_sorted(vector.begin(), vector.end()) << std::endl;
    // std::cout << "=> Deque is sorted  : " << std::boolalpha << std::is_sorted(deque.begin(), deque.end()) << std::endl;

    return 0;
}
































// for (size_t i = 0; i < 200000; ++i)
//     Input.push_back(std::rand() % 2147483647);
// std::cout << "=> Ford-Johnson (vector): size : " << vector.size() << std::endl;
// std::cout << "Is sorted : " << std::boolalpha << std::is_sorted(vector.begin(), vector.end()) << std::endl;
// std::cout << "Time to process : " << spent_time(n) << " µs" << std::endl;
// std::cout << "Time to process : " << spent_time(n1) << " µs" << std::endl;
// std::cout << "Time to process : " << spent_time(n2) << " µs" << std::endl;
// std::cout << "Time to process : " << spent_time(n3) << " µs" << std::endl << std::endl;
// std::cout << "estimatation   ~: " << spent_time(nt) << " µs" << std::endl << std::endl << std::endl;

// std::cout << "=> Ford-Johnson (deque): size : " << deque.size() << std::endl;
// std::cout << "Time to process : " << spent_time(n)<< " µs" << std::endl;
// std::cout << "Time to process : " << spent_time(n1) << " µs" << std::endl;
// std::cout << "Time to process : " << spent_time(n2) << " µs" << std::endl;
// std::cout << "Time to process : " << spent_time(n3) << " µs" << std::endl << std::endl;
// std::cout << "estimatation   ~: " << spent_time(nt2) << " µs" << std::endl << std::endl;

