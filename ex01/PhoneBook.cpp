#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "unistd.h"

int main()
{
    std::system("clear");
    PhoneBook pb;

    pb.SEARCH();
    sleep(2);
    pb.EXIT();
    return 0;
}
