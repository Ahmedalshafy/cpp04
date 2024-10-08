#include "Cat.hpp"
#include "printColors.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    printWithStyle("Cat constructor called", YELLOW, true,
    true, false);
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    printWithStyle("Cat copy constructor called", YELLOW, true, true, false);
}

Cat &Cat::operator=(const Cat &other)
{
    this->type = other.type;
    printWithStyle("Cat assigment operator called", YELLOW, true, true, false);
    return *this;
}

Cat::~Cat()
{
    printWithStyle("Cat destructor called", YELLOW, true, true, true);
}

void Cat::makeSound() const{
    printWithStyle("Meow meow", BLUE, true, false, false);
}

