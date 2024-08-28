#include "WrongCat.hpp"
#include "printColors.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    printWithStyle("WrongCat constructor called", MAGENTA, true, true, false);
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    printWithStyle("WrongCat copy constructor called", MAGENTA, true, true, false);
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    printWithStyle("WrongCat assigment operator called", MAGENTA, true, true, false);
    return *this;
}

WrongCat::~WrongCat()
{
    printWithStyle("WrongCat destructor called", MAGENTA, true, true, true);
}

void WrongCat::makeSound() const
{
    printWithStyle("Worng Meow meow", BLUE, true, false, false);
}

std::string WrongCat::getType() const
{
    printWithStyle(this->type, GREEN, true, false, false);
    return "";
}