#include "Dog.hpp"
#include "printColors.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    brain = new Brain();
    printWithStyle("Dog constructor called", MAGENTA, true, true, false);
}

Dog::Dog(const Dog &other) : Animal(other)
{
    if (brain)
        delete brain;
    brain = new Brain(*other.brain);
    this->type = other.type;
    printWithStyle("Dog copy constructor called", MAGENTA, true, true, false);
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return *this;
    Animal::operator=(other);
    if (brain)
        delete brain;
    brain = new Brain(*other.brain);
    this->type = other.type;
    printWithStyle("Dog assigment operator called", MAGENTA, true, true, false);
    return *this;
}

Dog::~Dog()
{
    delete brain;
    printWithStyle("Dog destructor called", MAGENTA, true, true, true);
}

void Dog::makeSound() const{
    printWithStyle("Woof woof", RED, true, false, false);
}