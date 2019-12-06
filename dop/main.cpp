 #include <iostream>
 #include <tuple>

template <size_t ID, class T>
int check(const T& p)
{
    size_t n = std::tuple_size_v<T>;
    auto sum = std::get<0>(p);
    if constexpr (ID < std::tuple_size_v<T>) {
        if (sum += std::get<ID>(p)) {
            check<ID + 1>(p);
        }
        else {
            return 0;
        }
    }
    return 2;
}

int main()
{
    int a, b ,c;
    std::cin >> a >> b >> c;
    std::tuple<int, int, int> p{a, b , c};
    if (check<0>(p) == 0) {
        std::cout << "no";
    }
}
