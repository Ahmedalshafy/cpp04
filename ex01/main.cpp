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
    const int numAnimals = 6;
    Animal* animals[numAnimals];

    // Create and fill the array with Dog and Cat objects
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    // Testing polymorphism: Make each Animal make a sound
    std::cout << "\n--- Testing Polymorphism ---" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "\n--- Testing Deep Copy with copy constructor ---" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;  // Copy constructor (deep copy)
    originalDog.setBrainIdea(0, "Original Dog's idea");
    std::cout << "Original Dog's brain idea[0]: " << originalDog.getBrainIdea(0) << std::endl;
    std::cout << "Copied Dog's brain idea[0]: " << copiedDog.getBrainIdea(0) << std::endl;

    std::cout << "\n--- Testing Deep Copy with assignment operator ---" << std::endl;
    Dog dog1;

    std::cout << "\n--- Deleting Animals ---" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];  
    }

    std::cout << "\n--- Program Completed ---" << std::endl;

    return 0;
}
