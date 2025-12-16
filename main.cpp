#include "String.hpp"

int main() {
    String str("asdas");
    String s(" Starry!!!!!");
    std::cout << str << std::endl;
    str[2] = 'S';
    std::cout << str << std::endl;
    str += ", hello?";
    std::cout << str << std::endl;

    str += s;
    std::cout << str << std::endl;

    String str1 = "World?";
    std::cout << str1 << std::endl;
    str1 = "Hello???";
    std::cout << str1 << std::endl;

    str1.erase(2, 5);
    std::cout << str1 << std::endl;

    std::cout << str1.cap() << std::endl;

    std::cout << str.slice(2, 6) << std::endl;

    //String str2;
    //std::cin >> str2;
    //std::cout << str2 << std::endl;

    String str3 = "hello;world;wcmd;dggdfs;3423";
    auto r = str3.split(';');

    for (auto s: r) {
        std::cout << s << std::endl;
    }

    String str4 = "";
    std::cout << str4 << std::endl;
}