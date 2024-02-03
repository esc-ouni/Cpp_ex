
template <typename T>
int &easyfind(T &Container , int param){
    typename T::iterator it = std::find(Container.begin(), Container.end(), param);

    return (it != Container.end() ?
            *it : throw std::out_of_range("Out of Range !"));
};