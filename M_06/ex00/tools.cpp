#include "ScalarConverter.hpp"

long int valid_num_form(std::string string){
    int k = 0;
    
    if (string.empty())
        throw std::logic_error("err");
    size_t i = 0;

    for (; i < string.length(); i++){
        if (i == 0 && (string.c_str()[0] == '+' || string.c_str()[0] == '-'))
            continue;
        if (!isdigit(string.c_str()[i]) || i == 11){
            if (string.c_str()[i] == '.' ){
                k++;
                if (k > 1)
                    throw std::logic_error("err");
                else
                    continue ;
            }
            else if ((i == (string.length() - 1)) && (string.c_str()[i] == 'f'))
                break ;
            throw std::logic_error("err");
        }
    }
    return (std::atoi(string.c_str()));
};

std::string Int_form(std::string const &param){
    std::stringstream ss; int n;
    try {
        n = valid_num_form(param);
        ss << std::atoi(param.c_str()); return (ss.str());
    }
    catch(...){
        return ("impossible");
    }
};

std::string Float_form(std::string const &param){
    std::stringstream ss; int n;
    try {
        n = valid_num_form(param);
        ss << std::fixed << std::setprecision(1) << std::stof(param); return (ss.str() + "f");
    }
    catch(...){
        return ("impossible");
    }
};

std::string Double_form(std::string const &param){
    std::stringstream ss; int n;
    try {
        n = valid_num_form(param);
        ss << std::fixed << std::setprecision(1) << std::stod(param); return (ss.str());
    }
    catch(...){
        return ("impossible");
    }
};

std::string Char_form(std::string const &param){
    std::string ret; int n;
    try{
        n = valid_num_form(param);
        if (std::isprint(std::atoi(param.c_str())))
            return (ret = (char)std::atoi(param.c_str()));
        else
            return ("Non displayable");
    }
    catch(...){
        return ("impossible");
    }
};
