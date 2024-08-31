#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal{
    
    private:
        Brain *brain;
    
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
        void setBrainIdea(int index, std::string idea);
        std::string getBrainIdea(int index) const;
};

#endif