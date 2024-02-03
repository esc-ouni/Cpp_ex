#include "BitcoinExchange.hpp"

void print(std::map<std::string, double> &Map){
    for (auto elem : Map){
        std::cout << "<"<< elem.first << ">\t= <" << elem.second << ">" << std::endl;
    }
}


double ft_stod(std::string &str){
    double n;
    char *ptr = NULL;

    n = std::strtod(str.c_str(), &ptr);
    return (n);
    std::string string = "";
    string = *ptr;

    if (!string.length()){
        // std::cout << "No GARBEGE " << std::endl;
        if (n == HUGE_VAL || n > 1000 || n < 0)
            throw std::runtime_error("Error: number out of range .");
        std::cout << "Wht !" << std::endl;
        return (n);
    }
    else 
        throw std::runtime_error("Error: bad input => ");
        // std::cout << "GARBEGE : <"<< string << ">" << std::endl;
    return (0);
}

void trim(std::string &line) {
    for (int i = line.length() - 1 ; !line.empty() && std::isspace(line[i]); --i){
        line.erase(line.begin()+i);
    }
    for (int i = 0; !line.empty() && std::isspace(line[i]); ++i){
        line.erase(line.begin()+i);
    }
};

void exctract_input(std::stringstream &stream, std::string &token, std::string &token2, std::string &token3, char dilimeter){
    std::getline(stream, token, dilimeter);
    std::getline(stream, token2, dilimeter);
    std::getline(stream, token3, dilimeter);
    trim(token);
    trim(token2);
    trim(token3);

    std::stringstream stream2;

    // std::cout << "token  : <" << token << ">" << std::endl;
    // std::cout << "token2 : <" << token2 << ">" << std::endl;
    // std::cout << "token3 : <" << token3 << ">" << std::endl;
    // std::cout << "Error: bad input => " << token << std::endl;
    
    //problem reusing the same stream
    
    stream2 << ft_stod(token2);
    token3 = stream2.str();
    // std::cout << "only stream : " << token3 << "\t the value in float : "<< ft_stod(token2) << std::endl;

    // try{
    //     stream.clear();
    //     stream << ft_stod(token2);
    //     token3 = stream.str();
    // }
    // catch(const std::exception& e){
    //     std::cerr << e.what() << '\n';
    //     throw e;
    // }
}

void output(std::string &line, std::map<std::string, double> &DB_Map, char dilimeter){
    std::stringstream stream(line);
    std::string       token, token2, token3;

    try{
        exctract_input(stream, token, token2, token3, dilimeter);
        std::cout << token << " => " << token2 << "\t = " << token3 << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
}

// void exctract_kv(std::string &line, std::map<std::string, double> &Map, char dilimeter){
//     std::stringstream stream(line);
//     std::string       token, token2, token3;

//     if(valid_line(stream, token, token2, token3, dilimeter)){
//         try{
//             Map[token] = ft_stod(token2); }
//         catch(const std::exception& e){
//             Map[token] = 0; }
//         // reasonable error rading DB
//     }

// };


void __init(int argc, char *argv[], std::map<std::string, double> &Map){
    std::string                   line;
    std::map<std::string, double> DB_Map;

    if (argc != 2)
        throw std::runtime_error("Error: wrong arg count.");

    std::ifstream infile(argv[1]);
    if (!infile.is_open())
        throw std::runtime_error("Error: could not open file.");

    std::ifstream dbfile("data.csv");
    if (!dbfile.is_open()){
        infile.close();
        throw std::runtime_error("Error: could not open DB file.");
    }

    // extract db file
    // while (std::getline(dbfile, line)){
    //     exctract_kv(line, DB_Map, ',');
    //     line.clear();
    // }

    // iterate over the file's lines
    while (std::getline(infile, line)){
        output(line, DB_Map, '|');
        line.clear();
    }

    // std::cout << std::endl << "DB_MAP :" << std::endl;
    // print(DB_Map);

    infile.close();
    dbfile.close();
};

