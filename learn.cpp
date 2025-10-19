
#include <iostream>

// template <typename T>
// struct Pair
// {
//     T first{};
//     T second{};
// };

template <typename T>
struct Pair
{
    T first;
    T second;
};

int main()
{
    std::cout << "learn" << std::endl;

    Pair<int> p1{5, 6}; // instantiates Pair<int> and creates object p1
    std::cout << p1.first << ' ' << p1.second << '\n';

    Pair<double> p2{1.2, 3.4}; // instantiates Pair<double> and creates object p2
    std::cout << p2.first << ' ' << p2.second << '\n';

    int x{};
    std::cout << x;

    return 0;
}