
template <typename T>
bool easyfind(T &Container , int param){
    for (size_t i = 0; i < Container.size(); i++){
        if (Container[i] == param)
            return true;
    };
    return false;
    // throw std::out_of_range("Out Range !"); // memic real container
};