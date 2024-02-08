#include "BitcoinExchange.hpp"


// bool year_is_leap(int val){
//     if (!(val % 4))
//         if (!(val % 100) && !(val % 400))
//             return true;
//         else if ((val % 100))
//             return true;
//     return false;
// };


int main(int argc, char *argv[]){
    // try{
    //     __init(argc, argv); }
    // catch(const std::exception& e){
    //     std::cerr << e.what() << std::endl; }

    int n;


    // isLeapYear(2000) == true) // Divisible by 400, leap year
    // isLeapYear(1996) == true) // Divisible by 4, not by 100, leap year
    // isLeapYear(1900) == false // Divisible by 100, but not by 400, not a leap year
    // isLeapYear(2021) == false // Not divisible by 4, not a leap year
    // isLeapYear(2024) == true) // Divisible by 4, leap year
    // isLeapYear(1800) == false // Divisible by 100, but not by 400, not a leap year
    // isLeapYear(1600) == true) // Divisible by 400, leap year
    // isLeapYear(2020) == true) // Recent past leap year
    // isLeapYear(2100) == false // Future year, divisible by 100 but not by 400, not a leap year

    n = 2000 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 1996 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 1900 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 2021 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 2024 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 1800 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 1600 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 2020 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;
    n = 2100 ;std::cout << n << " is leap : "<< std::boolalpha << year_is_leap(n) << std::endl;

    return 0;
}
