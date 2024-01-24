#ifndef __SCALAR_CONVERTER_
#define __SCALAR_CONVERTER_

#include <iostream>

class ScalarConverter{
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &r_inst);
        ScalarConverter &operator=(ScalarConverter const &r_inst);
        virtual ~ScalarConverter() = 0;

        static void convert(std::string const &param);
};

#endif