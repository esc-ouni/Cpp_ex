#include "ScalarConverter.hpp"

bool is_char(std::string string){
    if (string.length() == 1 && std::isprint(string.at(0)) && !isdigit(string.at(0)))
        return true;
    return false;
};

int valid_num_form(std::string string){
    int k = 0;
    
    if (string.empty())
        throw std::logic_error("err");
    if (is_char(string))
        return (static_cast<int>(string.at(0)));
    for (size_t i = 0; i < string.length(); i++){
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
            else if ((i == (string.length() - 1)) && (string.c_str()[i] == 'f' && string.find(".") != std::string::npos))
                break ;
            throw std::logic_error("err");
        }
    }
    return (0);
};

std::string Char_form(std::string const &param){
    std::string ret; int n;
    try{
        if (valid_num_form(param))
            n = valid_num_form(param);
        else 
            n = stoi(param);
        if (std::isprint(n)){
            ret += "'"; ret += static_cast<char>(n); return (ret += "'");
        }
        else if (isascii(n))
            return ("Non displayable");
        else
            throw std::logic_error("err");
    }
    catch(...){
        return ("impossible");
    }
};

std::string Int_form(std::string const &param){
    std::stringstream ss; int n;
    try {
        if (valid_num_form(param))
            n = valid_num_form(param);
        else 
            n = stoi(param);
        ss << static_cast<int>(n); return (ss.str());
    }
    catch(...){
        return ("impossible");
    }
};

std::string yeah_science(std::string const &param){
    std::string ret;

    if (param == "+inf" || param == "-inf" || param == "nan")
        return param;
    else if (param == "+inff" || param == "-inff" || param == "nanf")
        return (ret = param, ret.at(ret.length() - 1) = '\0', ret);
    return ret;
};

void precision(std::stringstream &ss, double val){
    if (((val * 10) - (static_cast<int>(val) * 10)) > 0)
        ss << val;
    else
        ss << std::fixed << std::setprecision(1) << val;
}

void precision(std::stringstream &ss, float val){
    if (((val * 10) - (static_cast<int>(val) * 10)) > 0)
        ss << val;
    else
        ss << std::fixed << std::setprecision(1) << val;
}

std::string Float_form(std::string const &param){
    std::stringstream ss; int n;
    try {
        if (!yeah_science(param).empty())
            return (ss << yeah_science(param) << "f", ss.str());
        n = valid_num_form(param);
        if (is_char(param))
            precision(ss, static_cast<float>(param.at(0)));
        else
            precision(ss, std::stof(param));
        return (ss.str() + "f");
    }
    catch(...){
        return ("impossible");
    }
};

std::string Double_form(std::string const &param){
    std::stringstream ss; int n;
    try {
        if (!yeah_science(param).empty())
            return (ss << yeah_science(param), ss.str());
        n = valid_num_form(param);
        if (is_char(param))
            precision(ss, static_cast<double>(param.at(0)));
        else
            precision(ss, std::stod(param));
        return (ss.str());
    }
    catch(...){
        return ("impossible");
    }
};
