#include "Dog.hpp"
#include "printColors.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    printWithStyle("Dog constructor called", MAGENTA, true, true, false);
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
    printWithStyle("Dog copy constructor called", MAGENTA, true, true, false);
}

Dog &Dog::operator=(const Dog &other)
{
    this->type = other.type;
    printWithStyle("Dog assigment operator called", MAGENTA, true, true, false);
    return *this;
}

Dog::~Dog()
{
    printWithStyle("Dog destructor called", MAGENTA, true, true, true);
}

void Dog::makeSound() const{
    printWithStyle("Woof woof", MAGENTA, true, false, false);
}