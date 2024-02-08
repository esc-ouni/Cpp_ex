#include "PmergeMe.hpp"

    // std::list<int>   list;
int main(int argc, char *argv[]){
    clock_t n, n1, n2, n3, n5, n6, n7, n8, nt, nt2, n9, n10, n11, n12, nt3;

    std::list<int>   list;
    std::deque<int>  deque;
    std::deque<int>  deque_c;
    std::vector<int> vector;
    std::vector<int> vector2;

    try{
        __init(argc, argv, deque);
        // n  = run_using_vector(deque, vector);

        n  = run_using_vector_v2(deque, vector);
        vector.clear();
       
        n1 = run_using_vector_v2(deque, vector);
        vector.clear();
       
        n2 = run_using_vector_v2(deque, vector);
        vector.clear();
       
        n3 = run_using_vector_v2(deque, vector);
        // vector.clear();
       
        nt = ((double)(n1 + n2 + n3) / 3);


        n5 = run_using_vector_v2(deque, vector2);
        vector2.clear();
        
        n6 = run_using_vector_v2(deque, vector2);
        vector2.clear();
        
        n7 = run_using_vector_v2(deque, vector2);
        vector2.clear();
        
        n8 = run_using_vector_v2(deque, vector2);
        // vector2.clear();
        
        nt2 = ((double)(n6 + n7 + n8) / 3);


        n9 = run_using_deque(deque, deque_c);
        deque_c.clear();
        
        n10 = run_using_deque(deque, deque_c);
        deque_c.clear();
        
        n11 = run_using_deque(deque, deque_c);
        deque_c.clear();
        
        n12 = run_using_deque(deque, deque_c);
        // vector2.clear();
        
        nt3 = ((double)(n10 + n11 + n12) / 3);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }

    std::cout << "=> Ford-Johnson (vector):" << std::endl;
    // print(vector);
    std::cout << "Time to process : " << spent_time(n) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n1) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n2) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n3) << " µs" << std::endl << std::endl;
    std::cout << "estimatation   ~: " << spent_time(nt) << " µs" << std::endl << std::endl << std::endl;

    std::cout << "=> Without Ford-Johnson :" << std::endl;
    // print(vector2);
    std::cout << "Time to process : " << spent_time(n5) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n6) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n7) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n8) << " µs" << std::endl << std::endl;
    std::cout << "estimatation   ~: " << spent_time(nt2) << " µs" << std::endl << std::endl;

    std::cout << "=> Ford-Johnson (deque) :" << std::endl;
    // print(deque_c);
    std::cout << "Time to process : " << spent_time(n9) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n10) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n11) << " µs" << std::endl;
    std::cout << "Time to process : " << spent_time(n12) << " µs" << std::endl << std::endl;
    std::cout << "estimatation   ~: " << spent_time(nt3) << " µs" << std::endl << std::endl;

    return 0;
}
