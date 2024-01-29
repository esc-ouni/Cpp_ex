#include "Array.hpp"
#define MAX_VAL 750

// void leak(){
//     system ("leaks Array | grep \"total leaked bytes\" | awk \'{print $4\" \"$3 }\'");
//     atexit(leak);
// };

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        std::cout << "element " << i+1 << " in numbers : " << numbers[i] << std::endl;
        std::cout << "element " << i+1 << " in mirror  : " << mirror[i] << std::endl;
    }
    std::cout << std::endl;
    //SCOPE
    {
        Array<int> tmp = numbers;
        for (size_t i = 0; i < tmp.size(); i++){
            std::cout << "element " << i+1 << " in tmp : " << tmp[i] << std::endl;
        }
        std::cout << std::endl;

        Array<int> test(tmp);
        for (size_t i = 0; i < test.size(); i++){
            std::cout << "element " << i+1 << " in test : " << test[i] << std::endl;
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try{
        numbers[-2] = 0;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    try{
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    for (int i = 0; i < MAX_VAL; i++){
        numbers[i] = rand();
        std::cout << "element " << i+1 << " in numbers : " << numbers[i] << std::endl;
    }
    delete[] mirror;
    return 0;
}
