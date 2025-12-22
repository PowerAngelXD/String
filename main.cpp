#include "String.hpp"
using namespace fzlib;

int main() {
    String str1 = "World?";
    std::cout << str1 << std::endl;
    str1 = "Hello???";
    std::cout << str1 << std::endl;

    str1.erase(2, 5);
    std::cout << str1 << std::endl;

    std::cout << str1.cap() << std::endl;

    std::cout << str1.slice(2, 4) << std::endl;

    String str3 = "hello;world;wcmd;dggdfs;starry!!";
    auto r = str3.split(';');

    for (auto s: r) {
        std::cout << s << std::endl;
    }

    std::cout << str1 + str3 << std::endl;

    String str4;
    getline(std::cin, str4);

    std::cout << str4 << std::endl;
}