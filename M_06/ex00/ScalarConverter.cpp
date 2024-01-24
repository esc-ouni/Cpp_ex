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

void ScalarConverter::convert(std::string const &param){
    // std::cout << "Raw    : <" << param << ">" <<std::endl;  
    std::cout << "Char   : <" << Char_form(param) << ">" <<std::endl;
    std::cout << "Int    : <" << Int_form(param) << ">" <<std::endl;
    std::cout << "Float  : <" << Float_form(param) << ">" <<std::endl;
    std::cout << "Double : <" << Double_form(param) << ">" <<std::endl;
};
