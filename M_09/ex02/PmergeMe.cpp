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
    std::vector<unsigned int> Y;
    unsigned int remain;

    if ((Input.size() % 2))
        remain = *(Input.end()-1);
 
    for (std::deque<unsigned int>::iterator it = Input.begin(); (it != Input.end()) && (it+1 != Input.end()) ; it+=2){
        if (*(it) > *(it+1))
            pair_container.push_back(std::make_pair(*(it),*(it+1)));
        else
            pair_container.push_back(std::make_pair(*(it+1), *(it)));
    }

    std::sort(pair_container.begin(), pair_container.end());

    if (pair_container.begin()->second < pair_container.begin()->first)
        vector.push_back(pair_container.begin()->second);
    else
        Y.push_back(pair_container.begin()->second);

    for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        vector.push_back(it->first);
    }

    for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pair_container.begin() + 1; it != pair_container.end() ; ++it){
        Y.push_back(it->second);
    };
    if ((Input.size() % 2))
        Y.push_back(remain);
    
    std::vector<unsigned int>::iterator it;
    while (Y.size()){
        it = Y.begin();
        for (it; it != Y.end() ; ++it){
            if (Y.size() == 1){
                it = Y.begin();
                vector.insert(std::lower_bound(vector.begin(), vector.end(), (*it)), (*it));
                Y.erase(it);
                break ;
            }
            else if (!(vector.size() % ((*it) ? (*it) : 1))){
                vector.insert(std::lower_bound(vector.begin(), vector.end(), (*it)), (*it));
                Y.erase(it);
                it = Y.begin();
            }
        }
    }

    return (timer.GetSpentTime(clock()));
};

time_t run_using_list(std::deque<unsigned int> &Input, std::list<unsigned int> &list){
    Timer timer(clock());

    std::list<std::pair<unsigned int, unsigned int> > pair_container;
    std::list<unsigned int> Y;
    unsigned int remain;

    if ((Input.size() % 2))
        remain = *(Input.end()-1);
 
    for (std::deque<unsigned int>::iterator it = Input.begin(); (it != Input.end()) && (it+1 != Input.end()) ; it+=2){
        if (*(it) > *(it+1))
            pair_container.push_back(std::make_pair(*(it),*(it+1)));
        else
            pair_container.push_back(std::make_pair(*(it+1), *(it)));
    }

    // std::sort(pair_container.begin(), pair_container.end());
    pair_container.sort(); //does it use recursion ?

    if (pair_container.begin()->second < pair_container.begin()->first)
        list.push_back(pair_container.begin()->second);
    else
        Y.push_back(pair_container.begin()->second);

    for (std::list<std::pair<unsigned int, unsigned int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        list.push_back(it->first);
    }

    std::list<std::pair<unsigned int, unsigned int> >::iterator it_ = pair_container.begin();
    ++it_;
    for (it_ ; it_ != pair_container.end() ; ++it_){
        Y.push_back(it_->second);
    };

    if ((Input.size() % 2))
        Y.push_back(remain);
    
    std::list<unsigned int>::iterator it;
    while (Y.size()){
        it = Y.begin();
        for (it; it != Y.end() ; ++it){
            if (Y.size() == 1){
                it = Y.begin();
                list.insert(std::lower_bound(list.begin(), list.end(), (*it)), (*it));
                Y.erase(it);
                break ;
            }
            else if (!(list.size() % ((*it) ? (*it) : 1))){
                list.insert(std::lower_bound(list.begin(), list.end(), (*it)), (*it));
                Y.erase(it);
                it = Y.begin();
            }
        }
    }

    return (timer.GetSpentTime(clock()));
};
