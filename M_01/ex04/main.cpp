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
    std::string   line;
    std::string   needle;
    std::ifstream infile;
    std::ofstream outfile;
    std::size_t   pos = 0;
    // int i = 0;

    needle = argv[1];
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
        while (pos < line.length())
        {
            if (pos!=std::string::npos)
            {
                // line.erase(pos, needle.length());
                line.at(pos) = 'b';
                std::cout << line << std::endl;
                // std::cout << i++ << std::endl;
                // std::cout << pos << std::endl;
                // std::cout << line.length() << std::endl;
                std::cout << line.find("a") << std::endl;
            }
            else
            {
                std::cout << "THE DKJ\n";
                break ;
            }
        }
        outfile << line << std::endl;
        line.clear();
        pos = 0;
    }
    infile.close();
    outfile.close();
    return (0);
}
