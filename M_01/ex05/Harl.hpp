#ifndef __HARL_HPP_
#define __HARL_HPP_

#include <iostream>
#include <fstream>
#include <string>

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        void    complain(std::string level);
};

#endif