#include "Animal.hpp"
#include "printColors.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other){
    std::cout << "Animal assigment operator called" << std::endl;
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