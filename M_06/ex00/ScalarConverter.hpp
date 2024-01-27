#ifndef __SCALAR_CONVERTER_
#define __SCALAR_CONVERTER_

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits.h>

class ScalarConverter{
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &r_inst);
        ScalarConverter &operator=(ScalarConverter const &r_inst);
        virtual ~ScalarConverter() = 0;

        static void convert(std::string const &param);
};

std::string Char_form(std::string const &param);
std::string Int_form(std::string const &param);
std::string Float_form(std::string const &param);
std::string Double_form(std::string const &param);

#endif