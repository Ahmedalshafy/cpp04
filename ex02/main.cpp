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
    // const int numAnimals = 10;  // For example, 5 Dogs and 5 Cats
    // Animal* animals[numAnimals];  // Array of Animal pointers
    // test the deep copy
    Dog dog1;
    Dog dog2(dog1);

    dog1.setBrainIdea(0, "dog1 idea");
    dog2.setBrainIdea(0, "dog2 idea");

    // // Create and fill the array with Dog and Cat objects
    // for (int i = 0; i < numAnimals; ++i) {
    //     if (i < numAnimals / 2)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    // }

    // // Testing polymorphism: Make each Animal make a sound
    // std::cout << "\n--- Testing Polymorphism ---" << std::endl;
    // for (int i = 0; i < numAnimals; ++i) {
    //     animals[i]->makeSound();
    // }

    // // Testing deep copy: Clone a Dog and test if it's a deep copy
    // std::cout << "\n--- Testing Deep Copy ---" << std::endl;
    // Dog originalDog;
    // Dog copiedDog = originalDog;  // Copy constructor (deep copy)

    // // To test deep copy, you could modify the original and ensure it doesn't affect the copy
    // originalDog.setBrainIdea(0, "Original Dog's idea");
    // std::cout << "Original Dog's brain idea[0]: " << originalDog.getBrainIdea(0) << std::endl;
    // std::cout << "Copied Dog's brain idea[0]: " << copiedDog.getBrainIdea(0) << std::endl;

    // // Delete each Animal in the array
    // std::cout << "\n--- Deleting Animals ---" << std::endl;
    // for (int i = 0; i < numAnimals; ++i) {
    //     delete animals[i];  // Delete as Animal, proper destructor chain should be called
    // }

    // // Check for memory leaks (Run with valgrind or similar tool)
    // std::cout << "\n--- Program Completed ---" << std::endl;

    // return 0;
}
