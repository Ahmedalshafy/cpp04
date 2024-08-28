#include <iostream>
#include <string>

#ifndef COLORS_H
#define COLORS_H

// Define ANSI color codes as macros
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"
#define UNDERLINE "\033[4m"

void printWithStyle(std::string text, std::string color, bool nl, 
                    bool bold, bool underline);

#endif