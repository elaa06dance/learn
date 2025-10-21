
#include <iostream>

template <typename T>
struct Pair0
{
    T first;
    T second;
};

template <typename T>
struct Pair1
{
    T first{};
    T second{};
};

int main()
{
    std::cout << "learn" << std::endl;

    Pair0<int> p0;
    std::cout << p0.first << ' ' << p0.second << '\n';

    // Pair1 compiles error for C++11
    Pair1<int> p1{5, 6}; // instantiates Pair<int> and creates object p1
    std::cout << p1.first << ' ' << p1.second << '\n';

    // Pair1<double> p2{1.2, 3.4}; // instantiates Pair<double> and creates object p2
    // std::cout << p2.first << ' ' << p2.second << '\n';

    return 0;
}