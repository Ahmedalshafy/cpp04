#include "Brain.hpp"
#include "printColors.hpp"

Brain::Brain()
{
    printWithStyle("Brain constructor called", GREEN, true, true, false);
}

Brain::Brain(const Brain &other)
{
    *this = other;
    printWithStyle("Brain copy constructor called", GREEN, true, true, false);
}

Brain &Brain::operator=(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    printWithStyle("Brain assigment operator called", GREEN, true, true, false);
    return *this;
}

Brain::~Brain()
{
    printWithStyle("Brain destructor called", GREEN, true, true, true);
}

void Brain::setIdea(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return this->ideas[index];
}