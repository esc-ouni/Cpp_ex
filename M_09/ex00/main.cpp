#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]){
    try{
        __init(argc, argv); }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl; }
    return 0;
}

// // map::lower_bound/upper_bound
// #include <iostream>
// #include <map>

// int main ()
// {
//   std::map<char,int> mymap;
//   std::map<char,int>::iterator low,up;

//     mymap['a']=20;
//     mymap['b']=40;
//     mymap['c']=60;
//     mymap['d']=80;
//     // mymap['e']=100;

//     low=mymap.lower_bound ('e');
//     // up=mymap.upper_bound ('g');


//     std::cout << "lower bound : " << low->first << " => " << low->second << '\n';
//     // std::cout << "upper bound : " << up->first << " => " << up->second << '\n';

//   return 0;
// }