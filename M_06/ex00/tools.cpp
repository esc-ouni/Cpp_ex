#include "ScalarConverter.hpp"

std::string ft_stof(std::string const &param){
    return (std::to_string(std::stof(param)));
};

std::string ft_stod(std::string const &param){
    return (std::to_string(std::stod(param)));
};

std::string Char_form(std::string const &param){
    std::string ret;
    try{
        if (std::isprint(std::atoi(param.c_str())))
            return (ret = (char)std::atoi(param.c_str()));
        else
            return ("Non displayable");
    }
    catch(...){
        return ("impossible");
    }
};

std::string Int_form(std::string const &param){
    std::stringstream ss;
    try {
        ss << std::atoi(param.c_str()); return (ss.str());
    }
    catch(...){
        return ("impossible");
    }
};

std::string Float_form(std::string const &param){
    try {
        return (ft_stof(param));
    }
    catch(...){
        return ("impossible");
    }
};

std::string Double_form(std::string const &param){
    try {
        return (ft_stod(param));
    }
    catch(...){
        return ("impossible");
    }
};