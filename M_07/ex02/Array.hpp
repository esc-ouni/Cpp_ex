#ifndef __ARRAY_HPP_
#define __ARRAY_HPP_

template <typename T>
class Array{
    private:
    public:
        Array();
        Array(Array const &r_inst);
        Array &operator=(Array const &r_inst);
        ~Array();
};

#endif