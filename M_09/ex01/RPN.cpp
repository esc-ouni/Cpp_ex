#include "RPN.hpp"

void print_stack(std::stack<int> &Conatiner){
    for (;Conatiner.size();){
        std::cout << Conatiner.top() << std::endl;
        Conatiner.pop();
    };
}

bool is_num(std::string &number){
    if (number.empty())
        return (false);
    for (size_t i = 0; i < number.length(); ++i){
        if (!isdigit(number.c_str()[i]) || i == 1)
            return (false);
    }
    return (true);
}

int result(std::string &oper, int &f_oprand, int &s_oprand){
    if (oper == "+"){
        return (f_oprand + s_oprand);
    } else if (oper == "-"){
        return (f_oprand - s_oprand);
    } else if (oper == "*"){
        return (f_oprand * s_oprand);
    } else if (oper == "/"){
        return (f_oprand / (s_oprand ? s_oprand : throw std::runtime_error("Error: Invalid Calculation !")));
    }
    return (0);
}

void __init(int argc, char *argv[]){
    int n,n1,r;
    std::string       token;
    std::stack<int>   Conatiner;
    std::stringstream stream(argv[1]);


    if (argc != 2)
        throw std::runtime_error("Error: Wrong Arg Count !");

    for (; std::getline(stream, token, ' ') ;){
        if (is_num(token))
            Conatiner.push(std::atoi(token.c_str()));
        else if (token == "*" || token == "/" || token == "-" || token == "+"){
            // continue;
            if (Conatiner.size() < 2)
                throw std::runtime_error("Error: Not Enough Operands !"); // not enough operands
            n1 = Conatiner.top();Conatiner.pop();
            n  = Conatiner.top();Conatiner.pop();
            Conatiner.push((r = result(token, n, n1)));
        }
        else
            throw std::runtime_error("Error: Unexpected Input !");
    }
    std::cout << "Result : " << Conatiner.top() << std::endl;
};

