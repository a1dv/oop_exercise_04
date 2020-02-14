#include <tuple>
#include <iostream>
#include <string>

template <typename Tuple, typename = void>
struct check_impl : public std::false_type {};

template <typename... Ts>
struct check_impl<std::tuple<Ts...>, std::void_t<decltype((std::declval<Ts>() + ...))>> : public std::true_type {};

template <typename Tuple>
constexpr bool check = check_impl<Tuple>::value;

int main() {
    std::cout << check<std::tuple<int, double, char>> << " " << check<std::tuple<int, std::string>>;
}
