#include "MutantStack.hpp"

int main(){
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << std::endl;

    MutantStack<int>::iterator it  = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    std::cout << "Using Iterator  :"<< std::endl;
    while (it != ite){
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << std::endl << "Using Basic Loop :"<< std::endl;
    std::stack<int> s(mstack);
    for (size_t i = 0; s.size(); i++){
        std::cout << s.top() << std::endl;
        s.pop();
    }    

    std::list<int> list;
    list.push_back(5);
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);

    std::list<int>::iterator list_it = list.begin();
    std::list<int>::iterator list_ite = list.end();
    std::cout << std::endl  << "Using Iterator (list) :"<< std::endl;
    while (list_it != list_ite){
        std::cout << *list_it << std::endl;
        ++list_it;
    }

    MutantStack<int> mstack9;

    mstack9.push(1);
    mstack9.push(2);
    mstack9.push(3);

    MutantStack<int>::iterator _it;
    MutantStack<int>::const_iterator _c_it;

    std::cout << std::endl;
    for (_it = mstack9.begin(); _it != mstack9.end(); ++_it){
        // (*_it) += 5;
        std::cout << *_it << std::endl;
    }
    std::cout << std::endl;
    for (_c_it = mstack9.cbegin(); _c_it != mstack9.cend(); ++_c_it){
        // (*_c_it) += 5;
        std::cout << *_c_it << std::endl;
    }

    return 0;
}