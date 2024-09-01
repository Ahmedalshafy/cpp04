#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "printColors.hpp"

#include <iostream>
#include "Animal.hpp"   
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
    // Animal* j = new Animal();
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    std::cout << "\n--- Creating Animals array ---" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Testing Polymorphism ---" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "\n--- Deleting Animals ---" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];  
    }

    std::cout << "\n\n--- Testing Deep Copy with copy constructor ---" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;  // Copy constructor (deep copy)
    originalDog.setBrainIdea(0, "Original Dog's idea");
    std::cout << "Original Dog's brain idea[0]: " << originalDog.getBrainIdea(0) << std::endl;
    std::cout << "Copied Dog's brain idea[0]: " << copiedDog.getBrainIdea(0) << std::endl;

    std::cout << "\n\n--- Testing Deep Copy 2 ---" << std::endl;
    Dog dog2;
    dog2.setBrainIdea(0, "Dog2's idea");
    {
        Dog dog3 = dog2;  // Copy constructor (deep copy)
    }
    std::cout << "\nDog2's brain idea[0]: " << dog2.getBrainIdea(0) << std::endl;

    std::cout << "\n--- Program Completed ---" << std::endl;

    return 0;
}
