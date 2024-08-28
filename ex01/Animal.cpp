#include "Animal.hpp"
#include "printColors.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other){
    *this = other;
}

Animal &Animal::operator=(const Animal &other){
    this->type = other.type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
    printWithStyle("Animal sound", GREEN, true, false, false);
}

std::string Animal::getType() const{
    return this->type;
}