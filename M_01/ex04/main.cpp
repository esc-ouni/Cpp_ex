#include "main.hpp"

void exit_err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
    std::exit(1);
}

void __init(int argc, char *argv[]){
    std::string holder;

    if (argc == 4){
        for (int i = 1; i < 4; i++){
            holder = argv[i];
            if (holder.empty())
                exit_err("Parse part");
            holder.clear();
        }
        return ;
    }
    exit_err("Parse part");
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
        exit_err("Failed to open your file");

    outfile.open((line += argv[1]) += ".replace");
    if (!outfile.is_open())
        exit_err("Failed to open your file");
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