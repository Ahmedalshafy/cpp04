#include "Cat.hpp"
#include "printColors.hpp"

Cat::Cat() : Animal()
{
    brain = new Brain();
    this->type = "Cat";
    printWithStyle("Cat default constructor called", YELLOW, true,
    true, false);
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    this->type = other.type;
    printWithStyle("Cat copy constructor called", YELLOW, true, true, false);
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return *this;
    Animal::operator=(other);
    brain = other.brain;
    this->type = other.type;
    printWithStyle("Cat assigment operator called", YELLOW, true, true, false);
    return *this;
}

Cat::~Cat()
{
    delete brain;
    printWithStyle("Cat destructor called", YELLOW, true, true, true);
}

void Cat::makeSound() const{
    printWithStyle("Meow meow", BLUE, true, false, false);
}

void Cat::setBrainIdea(int index, std::string idea)
{
    brain->setIdea(index, idea);
}

std::string Cat::getBrainIdea(int index) const
{
    return brain->getIdea(index);
}

