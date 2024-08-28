#include "printColors.hpp"
#include <iostream>

void printWithStyle(std::string text, std::string color, bool nl, 
                    bool bold, bool underline){
    std::cout << color ;
    if (bold) std::cout << BOLD;
    if (underline) std::cout << UNDERLINE;
    std::cout << text << RESET;
    if (nl) std::cout << std::endl;
}