#include "BitcoinExchange.hpp"

void print(std::map<std::string, double> &Map){
    for (auto elem : Map){
        std::cout << "<"<< elem.first << ">\t= <" << elem.second << ">" << std::endl;
    }
}

double ft_stod(std::string &str, bool limit){
    double n;
    char   *ptr = NULL;

    n = std::strtod(str.c_str(), &ptr);
    std::string string(ptr);

    if (!string.length()){
        if (n < 0)
            throw std::runtime_error("Error: not a positive number.");
        if (n == HUGE_VAL || ((n > 1000) && limit))
            throw std::runtime_error("Error: too large a number.");
        return (n);
    }
    else 
        throw std::logic_error("Error: bad input => ");
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

float fetch_db_exchange_rate(std::string &date, std::map<std::string, double> &DB_Map){
    return (DB_Map.find(date) != DB_Map.end() ? DB_Map.find(date)->second : 0.3);
}


bool valid_num(std::string &number, int date_part){
    if (number.empty())
        return (false);
    for (size_t i = 0; i < number.length(); ++i){
        if (!isdigit(number.c_str()[i]) || i == 5)
            return (false);
    }
    switch (date_part){
        case 0:
            if (!(std::atoi(number.c_str()) <= 2047 && std::atoi(number.c_str()) >= 2009) || number.length() != 4)
                return (false);
            break;
        case 1:
            if (!(std::atoi(number.c_str()) <= 12 && std::atoi(number.c_str()) >= 1) || number.length() != 2)
                return (false);
            break;
        case 2:
            if (!(std::atoi(number.c_str()) <= 31 && std::atoi(number.c_str()) >= 1) || number.length() != 2)
                return (false);
            break;
    }
    return (true);
}

bool valid_date(std::string &date){
    std::string       token;
    std::stringstream stream(date);
    int i = 0, k = 0;

    //case_getline_doesn't_check_('-''\0')
    for (int n = 0; n != std::string::npos ; ++k)
        n = date.find('-', n + 1);
    if (k != 3)
        return (false);
    
    //year-month-day
    for (i; std::getline(stream, token, '-'); ++i){
        if(!valid_num(token, i))
            return (false);
    }
    return ((i != 3) ? false : true );
}

void exctract_input(std::map<std::string, double> &DB_Map, std::stringstream &stream, std::string &token, std::string &token2, std::string &token3, char dilimeter){
    std::getline(stream, token, dilimeter);  trim(token);
    std::getline(stream, token2, dilimeter); trim(token2);
    std::getline(stream, token3, dilimeter); trim(token3);

    std::stringstream stream2;

    if (!valid_date(token) || !token2.length() || token3.length())
        throw std::logic_error("Error: bad input => ");
    //problem reusing the same stream

    stream2 << (ft_stod(token2, true) * fetch_db_exchange_rate(token, DB_Map));
    token3  = stream2.str();
}

void exctract_DB_input(std::stringstream &stream, std::string &token, std::string &token2, std::string &token3, char dilimeter){
    std::getline(stream, token, dilimeter);  trim(token);
    std::getline(stream, token2, dilimeter); trim(token2);
    std::getline(stream, token3, dilimeter); trim(token3);

    std::stringstream stream2;

    if (!token.length() || !token2.length() || token3.length())
        throw std::logic_error("Error: bad input => ");
}

void output(std::string &line, std::map<std::string, double> &DB_Map, char dilimeter){
    std::stringstream stream(line);
    std::string       token, token2, token3;

    try{
        exctract_input(DB_Map, stream, token, token2, token3, dilimeter);
        std::cout << token << " => " << token2 << " = " << token3 << std::endl;
    }
    catch(const std::logic_error& e){
        std::cout << e.what() << token << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
}



void exctract_kv(std::string &line, std::map<std::string, double> &Map, char dilimeter){
    std::stringstream stream(line);
    std::string       token, token2, token3;

    try{
        exctract_DB_input(stream, token, token2, token3, ',');
        Map[token] = ft_stod(token2, false);
    }
    catch(const std::exception& e){
        // reasonable error rading DB
        throw std::runtime_error("Error: unclear Data-Base info.");
    }
};


void __init(int argc, char *argv[]){
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
    while (std::getline(dbfile, line)){
        if (line.find("date") != std::string::npos){
            continue ;
        }
        exctract_kv(line, DB_Map, ',');
    }
    
    //create a function to fetch for the value to multiply with


    // iterate over the file's lines
    while (std::getline(infile, line)){
        if (line.find("date") != std::string::npos)
            continue ;
        output(line, DB_Map, '|');
    }

    // std::cout << std::endl << "DB_MAP :" << std::endl;
    // print(DB_Map);

    infile.close();
    dbfile.close();
};

