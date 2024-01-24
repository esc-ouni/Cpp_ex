#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
};

ScalarConverter::ScalarConverter(ScalarConverter const &r_inst){
    *this = r_inst;
};

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &r_inst){
    (void)r_inst;
    return (*this);
};

ScalarConverter::~ScalarConverter(){
};

std::string Char_form(std::string const &param){
    (void)param;
    return ("impossible");
};

std::string Int_form(std::string const &param){
    try {
        return (std::to_string(std::stoi(param)));
    }
    catch(...){
        return ("impossible");
    }
};

std::string Float_form(std::string const &param){
    try {
        return (std::to_string(std::stof(param)));
    }
    catch(...){
        return ("impossible");
    }
};

std::string Double_form(std::string const &param){
    try {
        return (std::to_string(std::stod(param)));
    }
    catch(...){
        return ("impossible");
    }
};

void ScalarConverter::convert(std::string const &param){
    std::cout << "Raw    : <" << param << ">" <<std::endl;
    std::cout << "Char   : <" << Char_form(param) << ">" <<std::endl;
    std::cout << "Int    : <" << Int_form(param) << ">" <<std::endl;
    std::cout << "Float  : <" << Float_form(param) << ">" <<std::endl;
    std::cout << "Double : <" << Double_form(param) << ">" <<std::endl;
};
