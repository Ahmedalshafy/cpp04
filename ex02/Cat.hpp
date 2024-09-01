#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal{
    
    private:
        Brain *brain;
    
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
        void setBrainIdea(int index, std::string idea);
        std::string getBrainIdea(int index) const;
};

#endif