#ifndef __HARL_HPP_
#define __HARL_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void    (Harl::*Func[4])(); 
    public:
        Harl(void);
        ~Harl(void);
        void    complain(std::string level);
};

void    exit_err(std::string err_msg);
int     contains_only_nums(std::string string);

#endif