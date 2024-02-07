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

int extract_num(std::string &number){
    int n;
    if (number.empty())
        throw std::runtime_error("Error: Invalid Input !");
    for (size_t i = 0; i < number.length(); i++){
        if (!isdigit(number.c_str()[i]) || i == 11)
            throw std::runtime_error("Error: Invalid Input !");
    }
    return (((n = std::atoi(number.c_str())) <= INT_MAX) ? n : throw std::runtime_error("Error: Invalid Input !"));
};

void __init(int argc, char *argv[], std::deque<int> &deque){
    std::string token;
    if (argc < 3)
        throw std::runtime_error("Error: Wrong Arg Count !");

    for (int i = 1; i < argc; ++i){
        token = argv[i];
        deque.push_back(extract_num(token)); 
    }
};


void generate_jseq(std::vector<int> &Container, int Msize){
    if (!Msize)
        return ;
    Container.push_back(0);
    Container.push_back(1);
    for (size_t i = 1; Container[i] <= Msize; ++i){
        Container.push_back(Container[i] + (Container[i - 1] * 2));
    }
    Container.erase(Container.begin());
    Container.erase(Container.begin()+1); 
}

time_t run_using_vector(std::deque<int> &Input, std::vector<int> &vector){
    Timer timer(clock());

    std::vector<std::pair<int, int> > pair_container;
    std::vector<int> Y;
    int remain;

    if ((Input.size() % 2))
        remain = *(Input.end()-1);
 
    for (std::deque<int>::iterator it = Input.begin(); (it != Input.end()) && (it+1 != Input.end()) ; it+=2){
        if (*(it) > *(it+1))
            pair_container.push_back(std::make_pair(*(it),*(it+1)));
        else
            pair_container.push_back(std::make_pair(*(it+1), *(it)));
    }

    std::sort(pair_container.begin(), pair_container.end());

    if (pair_container.begin()->second <= pair_container.begin()->first)
        vector.push_back(pair_container.begin()->second);
    else
        Y.push_back(pair_container.begin()->second);

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        vector.push_back(it->first);
    }

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin() + 1; it != pair_container.end() ; ++it){
        Y.push_back(it->second);
    };

    std::vector<int> Jacobsthal_seq;
    generate_jseq(Jacobsthal_seq, Y.size() + 1);

    for (size_t i = 0; Jacobsthal_seq[i] < Y.size(); ++i){
        for (size_t k = Jacobsthal_seq[i]; (k != -1) && (Y.at(k) != -1); --k){
            vector.insert(std::lower_bound(vector.begin(), vector.end(), Y[k]), Y[k]);
            Y[k] = -1;
        }
    }

    for (std::vector<int>::iterator it = Y.begin(); it != Y.end();++it){
        if (*it != -1)
            vector.insert(std::lower_bound(vector.begin(), vector.end(), *it), *it);
    }
    

    if ((Input.size() % 2))
        vector.insert(std::lower_bound(vector.begin(), vector.end(), remain), remain);

    return (timer.GetSpentTime(clock()));
};

time_t run_using_vector_v2(std::deque<int> &Input, std::vector<int> &vector){
    Timer timer(clock());

    std::vector<std::pair<int, int> > pair_container;
    std::vector<int> Y;
    int remain;

    if ((Input.size() % 2))
        remain = *(Input.end()-1);
 
    for (std::deque<int>::iterator it = Input.begin(); (it != Input.end()) && (it+1 != Input.end()) ; it+=2){
        if (*(it) > *(it+1))
            pair_container.push_back(std::make_pair(*(it),*(it+1)));
        else
            pair_container.push_back(std::make_pair(*(it+1), *(it)));
    }

    std::sort(pair_container.begin(), pair_container.end());

    if (pair_container.begin()->second <= pair_container.begin()->first)
        vector.push_back(pair_container.begin()->second);
    else
        Y.push_back(pair_container.begin()->second);

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        vector.push_back(it->first);
    }

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin() + 1; it != pair_container.end() ; ++it){
        Y.push_back(it->second);
    };

    std::vector<int> Jacobsthal_seq;
    generate_jseq(Jacobsthal_seq, Y.size() + 1);


    for (auto elem : Y){
        vector.insert(std::lower_bound(vector.begin(), vector.end(), elem), elem);
    }
    
    if ((Input.size() % 2))
        vector.insert(std::lower_bound(vector.begin(), vector.end(), remain), remain);

    return (timer.GetSpentTime(clock()));
};


time_t run_using_list(std::deque<int> &Input, std::list<int> &list){
    Timer timer(clock());

    std::list<std::pair<int, int> > pair_container;
    std::list<int> Y;
    int remain;

    if ((Input.size() % 2))
        remain = *(Input.end()-1);
 
    for (std::deque<int>::iterator it = Input.begin(); (it != Input.end()) && (it+1 != Input.end()) ; it+=2){
        if (*(it) > *(it+1))
            pair_container.push_back(std::make_pair(*(it),*(it+1)));
        else
            pair_container.push_back(std::make_pair(*(it+1), *(it)));
    }

    pair_container.sort(); //does it use recursion ?

    if (pair_container.begin()->second <= pair_container.begin()->first)
        list.push_back(pair_container.begin()->second);
    else
        Y.push_back(pair_container.begin()->second);

    for (std::list<std::pair<int, int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        list.push_back(it->first);
    }

    std::list<std::pair<int, int> >::iterator it_ = pair_container.begin();
    ++it_;
    for (it_ ; it_ != pair_container.end() ; ++it_){
        Y.push_back(it_->second);
    };

    std::vector<int> Jacobsthal_seq;
    generate_jseq(Jacobsthal_seq, Y.size());

    // for (size_t i = 0; Jacobsthal_seq[i] < Y.size(); ++i){
    //     size_t k = Jacobsthal_seq[i];
    //     size_t n = 0;
    //     for (std::list<int>::iterator it = Y.begin(); it != Y.end() && n;++it, --n){
    //         for (k; (it != Y.begin()) && (*it != -1); --it){
    //             list.insert(std::lower_bound(list.begin(), list.end(), *it), *it);
    //             *it = -1;
    //         }
    //     }
    // }
    
    auto Y_it = Y.begin();
    for (size_t i = 0; i < Jacobsthal_seq.size() && Y_it != Y.end(); ++i) {
        size_t count = Jacobsthal_seq[i]; // Use Jacobsthal_seq[i] to determine how many elements to process
        while (count > 0 && Y_it != Y.end()) {
            auto insert_pos = list.begin();
            while (insert_pos != list.end() && *insert_pos < *Y_it) {
                ++insert_pos; // Find the correct position to insert *Y_it in list
            }
            list.insert(insert_pos, *Y_it); // Insert the element from Y into the correct position in list
            Y_it = Y.erase(Y_it); // Remove the inserted element from Y and move to the next element
            --count;
        }
    }



    if ((Input.size() % 2))
        list.insert(std::lower_bound(list.begin(), list.end(), remain), remain);

    return (timer.GetSpentTime(clock()));
};
