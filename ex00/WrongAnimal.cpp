#include "WrongAnimal.hpp"
#include "printColors.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    *this = other;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    this->type = other.type;
    std::cout << "WrongAnimal assigment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const{
    printWithStyle("WrongAnimal sound", GREEN, true, false, false);
}
