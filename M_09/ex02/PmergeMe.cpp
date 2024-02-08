#include "PmergeMe.hpp"

double spent_time(clock_t const &raw_value){
    return (raw_value * (1000000.0 / CLOCKS_PER_SEC));
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

clock_t Timer::GetSpentTime(clock_t const &end) const{
    if (this->_start == -1 || end == -1)
        throw std::runtime_error("Error: Problem Calculating Time !");
    return ((end - this->_start)); // check overflows
};

int extract_num(std::string &number){
    unsigned int n;
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
    Container.push_back(0);
    Container.push_back(1);
    if (Msize <= 0)
        return ;
    for (size_t i = 1; Container[i] <= Msize; ++i){
        Container.push_back((Container[i] + (Container[i - 1] * 2)));
    }
    Container.erase(Container.begin()); 
    Container.erase(Container.begin());
    for (size_t i = 0; i < Container.size(); ++i)
        Container[i] -= 1;
};

clock_t run_using_vector(std::deque<int> &Input, std::vector<int> &vector){
    Timer timer(clock());

    std::vector<std::pair<int, int> > pair_container;
    std::vector<int> Y;
    size_t inserted_elements = 0;
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

    if (pair_container.begin()->second <= pair_container.begin()->first){
        vector.push_back(pair_container.begin()->second);
        Y.push_back(-1);
        ++inserted_elements;
    }
    else
        Y.push_back(pair_container.begin()->second);

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        vector.push_back(it->first);
    }

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin() + 1; it != pair_container.end() ; ++it){
        Y.push_back(it->second);
    };

    std::vector<int> Jacobsthal_seq;
    generate_jseq(Jacobsthal_seq, (Y.size() + 1));

    for (size_t i = 0; i < Jacobsthal_seq.size() ; ++i){
        
        int k = Jacobsthal_seq[i];
        if (k >= Y.size())
            k = Y.size() - 1;
    
        for (; k > 0 ; --k){
            if (Y[k] == -1)
                break ;
            else if ((Y[k] != -1)){
                // std::cout << "=> size of S + 1 : " << std::distance(vector.begin(), (vector.begin() + k + inserted_elements)) + 1 << std::endl;
                vector.insert(std::lower_bound(vector.begin(), (vector.begin() + k + inserted_elements) , Y[k]), Y[k]); // limit ranges 
                Y[k] = -1;
                ++inserted_elements;
            }
        }
    }

    if ((Input.size() % 2))
        vector.insert(std::lower_bound(vector.begin(), vector.end(), remain), remain);

    return (timer.GetSpentTime(clock()));
};

clock_t run_using_vector_v2(std::deque<int> &Input, std::vector<int> &vector){
    Timer timer(clock());

   std::vector<std::pair<int, int> > pair_container;
    std::vector<int> Y;
    size_t inserted_elements = 0;
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

    if (pair_container.begin()->second <= pair_container.begin()->first){
        vector.push_back(pair_container.begin()->second);
        Y.push_back(-1);
        ++inserted_elements;
    }
    else
        Y.push_back(pair_container.begin()->second);

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        vector.push_back(it->first);
    }

    for (std::vector<std::pair<int, int> >::iterator it = pair_container.begin() + 1; it != pair_container.end() ; ++it){
        Y.push_back(it->second);
    };

    std::vector<int> Jacobsthal_seq;
    generate_jseq(Jacobsthal_seq, (Y.size() + 1));

    for ( auto &elem : Y){
        if (elem != -1)
            vector.insert(std::lower_bound(vector.begin(), vector.end(), elem), elem);
    }
        
    if ((Input.size() % 2))
        vector.insert(std::lower_bound(vector.begin(), vector.end(), remain), remain);
    return (timer.GetSpentTime(clock()));
};

clock_t run_using_deque(std::deque<int> &Input, std::deque<int> &deque){
    Timer timer(clock());

   std::deque<std::pair<int, int> > pair_container;
    std::deque<int> Y;
    size_t inserted_elements = 0;
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

    if (pair_container.begin()->second <= pair_container.begin()->first){
        deque.push_back(pair_container.begin()->second);
        Y.push_back(-1);
        ++inserted_elements;
    }
    else
        Y.push_back(pair_container.begin()->second);

    for (std::deque<std::pair<int, int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        deque.push_back(it->first);
    }

    for (std::deque<std::pair<int, int> >::iterator it = pair_container.begin() + 1; it != pair_container.end() ; ++it){
        Y.push_back(it->second);
    };

    std::vector<int> Jacobsthal_seq;
    generate_jseq(Jacobsthal_seq, (Y.size() + 1));

    for (size_t i = 0; i < Jacobsthal_seq.size() ; ++i){
        
        int k = Jacobsthal_seq[i];
        if (k >= Y.size())
            k = Y.size() - 1;
    
        for (; k > 0 ; --k){
            if (Y[k] == -1)
                break ;
            else if ((Y[k] != -1)){
                // std::cout << "=> size of S + 1 : " << std::distance(deque.begin(), (deque.begin() + k + inserted_elements)) + 1 << std::endl;
                deque.insert(std::lower_bound(deque.begin(), (deque.begin() + k + inserted_elements) , Y[k]), Y[k]);
                Y[k] = -1;
                ++inserted_elements;
            }
        }
    }

    if ((Input.size() % 2))
        deque.insert(std::lower_bound(deque.begin(), deque.end(), remain), remain);

    return (timer.GetSpentTime(clock()));
};
