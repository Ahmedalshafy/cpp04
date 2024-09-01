#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain{
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();
        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);
    private:
        std::string ideas[100];
};

#endif