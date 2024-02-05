#include "PmergeMe.hpp"

double spent_time(time_t &raw_value){
    return (raw_value * (1000000 / CLOCKS_PER_SEC));
};

Timer::Timer(){
};

Timer::Timer(clock_t const &start){
    this->_start = start;
};

Timer::Timer(Timer const &r_inst){
    (*this) = r_inst;
};

Timer &Timer::operator=(Timer const &r_inst){
    (void)r_inst;
    return (*this);
};

Timer::~Timer(){
};

time_t Timer::GetSpentTime(clock_t const &end) const{
    if (this->_start == -1 || end == -1)
        throw std::runtime_error("Error: Problem Calculating Time !");
    return ((end - this->_start)); // check overflows
};

unsigned int extract_num(std::string &number){
    unsigned int n;
    if (number.empty())
        throw std::runtime_error("Error: Invalid Input !");
    for (size_t i = 0; i < number.length(); i++){
        if (!isdigit(number.c_str()[i]) || i == 11)
            throw std::runtime_error("Error: Invalid Input !");
    }
    return (((n = std::atoi(number.c_str())) <= INT_MAX) ? n : throw std::runtime_error("Error: Invalid Input !"));
};

void __init(int argc, char *argv[], std::deque<unsigned int> &deque){
    std::string token;
    if (argc < 3)
        throw std::runtime_error("Error: Wrong Arg Count !");

    for (int i = 1; i < argc; ++i){
        token = argv[i];
        deque.push_back(extract_num(token)); 
    }
};

time_t run_using_vector(std::deque<unsigned int> &Input, std::vector<unsigned int> &vector){
    Timer timer(clock());

    std::vector<std::pair<unsigned int, unsigned int> > pair_container;
    unsigned int remain;

    if ((Input.size() % 2))
        remain = *(Input.end()-1);
 
    //divide the container elements into pairs && sort element in the pair
    for (std::deque<unsigned int>::iterator it = Input.begin(); (it != Input.end()) && (it+1 != Input.end()) ; it+=2){
        if (*(it) > *(it+1))
            pair_container.push_back(std::make_pair(*(it),*(it+1)));
        else
            pair_container.push_back(std::make_pair(*(it+1), *(it)));
    }

    //sort pair_container by first element on the pair (sort uses quicksort / uses recursion)
    std::sort(pair_container.begin(), pair_container.end());

    //print pairs
    std::cout << "=> PAIR_CONTAINER (after):" << std::endl; 
    print_pair(pair_container);
    if ((Input.size() % 2))
        std::cout << "With remain : " << remain << std::endl;
    std::cout << std::endl;
    
    //store S(sequence w big elems) + smallest head from both sequence
    if (pair_container.begin()->second < pair_container.begin()->first)
        vector.push_back(pair_container.begin()->second);

    for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        vector.push_back(it->first);
    }

    //print S + smallest head from both sequence
    std::cout << "=> print S + smallest head from both sequence" << std::endl;
    print(vector);


    return (timer.GetSpentTime(clock()));
};

time_t run_using_list(std::deque<unsigned int> &Input, std::list<unsigned int> &list){
    Timer timer(clock());

    return (timer.GetSpentTime(clock()));
};
