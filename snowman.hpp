#include <string>
#include <array>

namespace ariel {
    const int SIZE = 8; //size of the build number
    const std::array<std::string, 4> hat = {" _===_ \n", "  ___  \n ..... \n", "   _   \n  /_\\  \n", "  ___  \n (_*_) \n"};
    const std::array<std::string, 4> base = {" ( : ) ", " (\" \") ", " (___) ", " (   ) "};
    const std::array<char, 4> eyes = {'.','o','O','-'};
    const std::array<char, 4> nose = {',','.','_',' '};
    const std::array<char, 4> Larm = {'<', '\\', '/', ' '};
    const std::array<char, 4> Rarm = {'>', '/', '\\', ' '};
    const std::array<std::string, 4> body = {" ( : ) \n", " (] [) \n", " (> <) \n", " (   ) \n"};
    const std::string head_tmp = " (   ) \n";
    std::string snowman(int build);
};
