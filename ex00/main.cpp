#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "printColors.hpp"

int main(void) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	printWithStyle("========================", GREEN, true, false, false);
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	printWithStyle("========================", GREEN, true, false, false);
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	printWithStyle("========================", GREEN, true, false, false);
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	printWithStyle("-------------------------", GREEN, true, false, false);
	printWithStyle("WrongAnimal tests", GREEN, true, false, false);
	printWithStyle("-------------------------", GREEN, true, false, false);

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	printWithStyle("========================", GREEN, true, false, false);
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	printWithStyle("========================", GREEN, true, false, false);
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	printWithStyle("========================", GREEN, true, false, false);
	delete wrongAnimal;
	delete wrongCat;
	return 0;
}
