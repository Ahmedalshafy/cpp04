#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "printColors.hpp"

#include <iostream>
#include "Animal.hpp"   // Base class
#include "Dog.hpp"      // Derived class Dog
#include "Cat.hpp"      // Derived class Cat

int main() {
    const int numAnimals = 10;  // For example, 5 Dogs and 5 Cats
    Animal* animals[numAnimals];  // Array of Animal pointers

    // Create and fill the array with Dog and Cat objects
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    // Testing deep copy: Clone a Dog and test if it's a deep copy
    std::cout << "\n--- Testing Deep Copy ---" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;  // Copy constructor (deep copy)

    // To test deep copy, you could modify the original and ensure it doesn't affect the copy
    originalDog.setIdea(0, "Original Dog's Idea");  // Modify the original dog’s brain
    std::cout << "Original Dog's brain idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's brain idea[0]: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    // Delete each Animal in the array
    std::cout << "\n--- Deleting Animals ---" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];  // Delete as Animal, proper destructor chain should be called
    }

    // Check for memory leaks (Run with valgrind or similar tool)
    std::cout << "\n--- Program Completed ---" << std::endl;

    return 0;
}
