#include "BitcoinExchange.hpp"

bool valid_num(std::string &number){
    if (number.empty())
        return (false);
    for (size_t k =0,i =0; i < number.length(); ++i){
        if (!std::isdigit(number.at(i)) || i == 11){
            if (number.at(i) == '.' ){
                k++;
                if (k > 1)
                    return (false);
            }
        }
    }
    if (!std::isdigit(number.at(number.size() - 1)) || !std::isdigit(number.at(0)))
        return (false);
    return (true);
};

double ft_stod(std::string &str, bool limit){
    double n;
    char   *ptr = NULL;

    n = std::strtod(str.c_str(), &ptr);
    std::string string(ptr);

    if (n < 0)
        throw std::runtime_error("Error: not a positive number.");
    if (n == HUGE_VAL || ((n > 1000) && limit))
        throw std::runtime_error("Error: too large a number.");
    if (string.length() || !valid_num(str))
        throw std::logic_error("Error: bad input => ");
    return (n);
}

void trim(std::string &line) {
    for (int i = 0; !line.empty() && std::isspace(line.at(i)); ++i){
        line.erase(line.begin());
        i = -1;
    }
    for (int i = line.size() - 1 ; !line.empty() && std::isspace(line[i]); --i){
        line.erase(line.begin()+i);
        i = line.size();
    }
};

float get_closest_date(std::string &date, std::map<std::string, double> &DB_Map){
    std::map<std::string, double>::iterator it;

    it = DB_Map.lower_bound(date);

    if (it == DB_Map.begin())
        throw std::logic_error("Error: bad input => ");
    --it;
    return it->second;
};

float fetch_db_exchange_rate(std::string &date, std::map<std::string, double> &DB_Map){
    return (DB_Map.find(date) != DB_Map.end() ? DB_Map.find(date)->second : get_closest_date(date, DB_Map));
};

bool year_is_leap(int val){
    if (!(val % 4)){
        if (!(val % 100) && !(val % 400))
            return true;
        else if ((val % 100))
            return true;
    }
    return false;
};

int _month = 0, _year = 0;
bool valid_day(int val){
    if (_month == 2){
        if (year_is_leap(_year) && (val > 29 || val <= 0)){
            return false;
        }
        else if (!year_is_leap(_year) && (val > 28 || val <= 0)){
            return false;
        }
    } else if (_month == 4 || _month == 6 || _month == 9 || _month == 11){
        if (val > 30 || val <= 0)
            return false;
    } else {
        if (val > 31 || val <= 0)
            return false;
    }
    return true;
};

bool valid_num(std::string &number, int date_part){
    if (number.empty())
        return (false);
    for (size_t i = 0; i < number.length(); ++i){
        if (!std::isdigit(number.at(i)) || i == 5)
            return (false);
    }
    switch (date_part){
        case 0:
            if (!(std::atoi(number.c_str()) <= 2047 && std::atoi(number.c_str()) >= 2009) || number.length() != 4)
                return (false);
            _year = std::atoi(number.c_str());
            break;
        case 1:
            if (!(std::atoi(number.c_str()) <= 12 && std::atoi(number.c_str()) >= 1) || number.length() != 2)
                return (false);
            _month = std::atoi(number.c_str());
            break;
        case 2:
            if (!(std::atoi(number.c_str()) <= 31 && std::atoi(number.c_str()) >= 1) || number.length() != 2 || !valid_day(std::atoi(number.c_str())))
                return (false);
            break;
    }
    return (true);
};

bool valid_date(std::string &date){
    std::string       token;
    std::stringstream stream(date);
    int i = 0, k = 0;

    for (size_t n = 0; n != std::string::npos ; ++k)
        n = date.find('-', n + 1);
    if (k != 3)
        return (false);
    
    for (; std::getline(stream, token, '-'); ++i){
        if(!valid_num(token, i))
            return (false);
    }
    return ((i != 3) ? false : true );
};

void exctract_input(std::map<std::string, double> &DB_Map, std::stringstream &stream, std::string &token, std::string &token2, std::string &token3, char dilimeter){
    std::getline(stream, token, dilimeter);  trim(token);
    std::getline(stream, token2, dilimeter); trim(token2);
    std::getline(stream, token3, dilimeter); trim(token3);
    std::stringstream stream2;

    if (!valid_date(token) || !token2.length() || token3.length())
        throw std::logic_error("Error: bad input => ");
        
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
        exctract_DB_input(stream, token, token2, token3, dilimeter);
        Map[token] = ft_stod(token2, false);
    }
    catch(const std::exception& e){
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

    while (std::getline(dbfile, line)){
        if (line.find("date") != std::string::npos){
            continue ;
        }
        exctract_kv(line, DB_Map, ',');
    }
    if (!DB_Map.size())
        throw std::runtime_error("Error: Empty Data-Base file.");

    while (std::getline(infile, line)){
        if (line.find("date") != std::string::npos)
            continue ;
        output(line, DB_Map, '|');
    }

    infile.close();
    dbfile.close();
};

