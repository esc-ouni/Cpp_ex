#ifndef __HARL_HPP_
#define __HARL_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>

#define DEBUG   1
#define INFO    2
#define WARNING 3
#define ERROR   4

typedef void (*MemberFunc)(void);

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        MemberFunc  *MFptr; 
    public:
        Harl(void);
        ~Harl(void);
        void    complain(std::string level);
};

Harl::Harl(void){
    this->MFptr = new MemberFunc[5];

    this->MFptr[0] = &Harl::debug;
    this->MFptr[1] = &Harl::info;
    this->MFptr[2] = &Harl::warning;
    this->MFptr[3] = &Harl::error;
    this->MFptr[4] = NULL;
};

void    exit_err(std::string err_msg);
int     contains_only_nums(std::string string);

#endif