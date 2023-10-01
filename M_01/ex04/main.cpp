#include "main.hpp"

void exit_err(std::string err_msg){
    std::cerr << err_msg << std::endl;
    std::exit(1);
}

void __init(int argc, char *argv[]){
    std::string holder;

    if (argc == 4){
        for (int i = 1; i < 4; i++){
            holder = argv[i];
            if (holder.empty())
                exit_err("Err: parse part");
            holder.clear();
        }
    }
    // exit_err("Err: parse part");
}


int main(int argc, char *argv[])
{
    __init(argc, argv);
    std::string line;
    std::ifstream infile;
    std::ofstream outfile;

    line.clear();
    infile.open(argv[1]);
    if (!infile.is_open())
    {
        std::cout << "Failed to open the file " << argv[1] << std::endl;
        std::exit(1);
    }

    outfile.open((line += argv[1]) += ".replace");
    line.clear();

    while (!getline(infile, line).eof())
    {
        line.find(argv[2]);
        outfile << line << std::endl;
        line.clear();
    }
    infile.close();
    outfile.close();
    return (0);
}