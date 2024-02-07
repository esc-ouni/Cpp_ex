#include "PmergeMe.hpp"

double spent_time(clock_t &raw_value){
    // return ((double)raw_value / CLOCKS_PER_SEC);
    return ((double)raw_value);
};

// Timer::Timer(){
//     this->_start = clock();
// };

// Timer::Timer(clock_t const &start){
//     this->_start = start;
// };

// Timer::Timer(Timer const &r_inst){
//     (*this) = r_inst;
// };

// Timer &Timer::operator=(Timer const &r_inst){
//     (void)r_inst;
//     return (*this);
// };

// Timer::~Timer(){
// };

// clock_t Timer::GetSpentTime(clock_t const &end) const{
//     if (this->_start == -1 || end == -1)
//         throw std::runtime_error("Error: Problem Calculating Time !");
//     return ((end - this->_start));
// };

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
    if (!Msize)
        return ;
    for (size_t i = 1; Container[i] <= Msize; ++i){
        Container.push_back(Container[i] + (Container[i - 1] * 2));
    }
    Container.erase(Container.begin() + 1); 
}


class Timer {
public:
    Timer() { gettimeofday(&start, NULL); }

    // Returns the elapsed time in seconds with microsecond precision
    double elapsed() {
        struct timeval end;
        gettimeofday(&end, NULL);
        double seconds = (end.tv_sec - start.tv_sec);
        double microSeconds = (end.tv_usec - start.tv_usec) / 1000000.0;
        return seconds + microSeconds;
    }

private:
    struct timeval start;
};

// int main() {

    // Your program or code block goes here

    // std::cout << "Time spent: " << timer.elapsed() << " seconds" << std::endl;

    // return 0;
// }

clock_t run_using_vector(std::deque<int> &Input, std::vector<int> &vector){
    Timer timer; // Start the timer
    // Timer timer(clock());

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

    if (pair_container.begin()->second <= pair_container.begin()->first){
        vector.push_back(pair_container.begin()->second);
        Y.push_back(-1);
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
        for (int k = Jacobsthal_seq[i]; k >= 0 ; --k){
            if (k >= Y.size())
                k = Y.size();
            else if (Y[k] == -1)
                break ;
            else if ((Y[k] != -1)){
                vector.insert(std::lower_bound(vector.begin(), vector.end(), Y[k]), Y[k]); // limit ranges !
                Y[k] = -1;
            }
        }
    }
    
    if ((Input.size() % 2))
        vector.insert(std::lower_bound(vector.begin(), vector.end(), remain), remain);

    // return (t = clock() - t);
    return (timer.elapsed() * 1000000);

};

void insertFromYtoS(std::vector<int>& S, std::vector<int>& Y, std::vector<int>& Jacobsthal_seq) {
    // Iterate through the Jacobsthal sequence
    for (size_t i = 0; i < Jacobsthal_seq.size(); ++i) {
        // Calculate the end index for the current group based on Jacobsthal numbers
        size_t endIdx = Jacobsthal_seq[i] < Y.size() ? Jacobsthal_seq[i] : Y.size();

        for (size_t k = 0; k < endIdx; ++k) {
            // Check if the element is already marked as inserted
            if (Y[k] == -1) {
                continue; // Skip already inserted elements
            }

            // Find the correct position in S for Y[k] using binary search
            auto it = std::lower_bound(S.begin(), S.end(), Y[k]);
            
            // Insert Y[k] into the found position in S
            S.insert(it, Y[k]);

            // Mark the element in Y as inserted by substituting it with -1
            Y[k] = -1;
        }

        // Remove the first group of elements based on the current Jacobsthal number and adjust for next iteration
        Y.erase(Y.begin(), Y.begin() + endIdx);

        // Since we're modifying Y directly, we should also adjust the Jacobsthal index sequence accordingly
        // This step is crucial to reflect the removal of elements from Y
        for (size_t j = i+1; j < Jacobsthal_seq.size(); ++j) {
            if (Jacobsthal_seq[j] > endIdx) {
                Jacobsthal_seq[j] -= endIdx; // Adjust the Jacobsthal sequence for the next groups
            }
        }
    }
}

clock_t run_using_vector_v2(std::deque<int> &Input, std::vector<int> &vector){
    // Timer timer(clock());

    clock_t t = clock();

    
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

    if (pair_container.begin()->second <= pair_container.begin()->first){
        vector.push_back(pair_container.begin()->second);
        Y.push_back(-1);
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

    insertFromYtoS(vector, Y, Jacobsthal_seq);

    // for (size_t i = 0; i < Jacobsthal_seq.size() ; ++i){
    //     for (int k = Jacobsthal_seq[i]; k >= 0 ; --k){
    //         if (k >= Y.size())
    //             k = Y.size();
    //         else if (Y[k] == -1)
    //             break ;
    //         else if ((Y[k] != -1)){
    //             vector.insert(std::lower_bound(vector.begin(), vector.begin() + k, Y[k]), Y[k]); 
    //             Y[k] = -1;
    //         }
    //     }
    // }

    if ((Input.size() % 2))
        vector.insert(std::lower_bound(vector.begin(), vector.end(), remain), remain);

    return (t = clock() - t);
};



clock_t run_using_list(std::deque<int> &Input, std::list<int> &list){
    // Timer timer(clock());
    // clock_t t = clock();
    Timer timer; // Start the timer


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

    pair_container.sort();

    if (pair_container.begin()->second <= pair_container.begin()->first){
        list.push_back(pair_container.begin()->second);
        Y.push_back(-1);
    }
    else
        Y.push_back(pair_container.begin()->second);

    for (std::list<std::pair<int, int> >::iterator it = pair_container.begin(); it != pair_container.end() ; ++it){
        list.push_back(it->first);
    }

    std::list<std::pair<int, int> >::iterator iter = pair_container.begin();
    ++iter;
    for (iter; iter != pair_container.end() ; ++iter){
        Y.push_back(iter->second);
    };

    std::vector<int> Jacobsthal_seq;
    generate_jseq(Jacobsthal_seq, (Y.size() + 1));


    std::list<int>::iterator Y_it = Y.begin();    

    for (size_t i = 0; i < Jacobsthal_seq.size() && Y_it != Y.end(); ++i){
        
        for (int n = 0; n < Jacobsthal_seq[i] && Y_it != Y.end() ; ++n)
            ++Y_it;

        for (Y_it; Y_it != Y.begin() ; --Y_it){
            if ((*Y_it) == -1)
                break ;
            else if (((*Y_it) != -1)){
                list.insert(std::lower_bound(list.begin(), list.end(), (*Y_it)), (*Y_it));
                (*Y_it) = -1;
            }
        }
    }
    list.erase(list.begin());





    if ((Input.size() % 2))
        list.insert(std::lower_bound(list.begin(), list.end(), remain), remain);

    // std::cout << "=> List :" << std::endl;
    // print(list);
    // std::cout << "=> Y :" << std::endl;
    // print(Y);

    // return (t = clock() - t);
    return (timer.elapsed() * 1000000);
};
