
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

    Pair0<double> p00;
    std::cout << p00.first << ' ' << p00.second << '\n';

    Pair0<double> p000{2.5, 3.4};
    std::cout << p000.first << ' ' << p000.second << '\n';

    Pair1<int> p1;
    std::cout << p1.first << ' ' << p1.second << '\n';

    // Pair1 compiles error for C++11 if both init here and in struct (compare to Pair0)
    // Pair1<int> p11{5, 6};
    // std::cout << p11.first << ' ' << p11.second << '\n';

    return 0;
}