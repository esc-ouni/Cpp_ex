#include "main.hpp"

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::string line;
        std::ifstream infile;
        std::ofstream outfile;

        infile.open(argv[1]);
        if (!infile.is_open())
            std::cout << "Failed to open the file" << std::endl;
        while (!getline(infile, line).eof())
        {
            std::cout << line << std::endl;
            line.clear();
        }
        infile.close();
    }
    return (0);
}