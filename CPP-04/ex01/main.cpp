/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:04:00 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/28 14:37:16 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"

#define N_ANIMALS 10

int main(void)
{
	{
		const Animal *lotsOfAnimals[N_ANIMALS];

		for (int i = 0; i < N_ANIMALS; i++)
		{
			if (i < N_ANIMALS / 2)
				lotsOfAnimals[i] = new Dog();
			else
				lotsOfAnimals[i] = new Cat();
		}
		std::cout << "-------------------------------------\n";
		std::cout << lotsOfAnimals[0]->getType() << std::endl;
		std::cout << lotsOfAnimals[5]->getType() << std::endl;
		Brain *brain;
		brain = &lotsOfAnimals[0]->getBrain();
		brain->setIdea("I want sarshisitas!", 0);
		brain->setIdea("Let's play ball!!", 1);
		brain->setIdea("Feed me human!", 2);
		std::cout << lotsOfAnimals[0]->getBrain().getIdea(0) << std::endl;
		std::cout << lotsOfAnimals[0]->getBrain().getIdea(1) << std::endl;
		std::cout << "-------------------------------------\n";
		for (int i = 0; i < N_ANIMALS; i++)
			delete lotsOfAnimals[i];
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using copy constructor:\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog(*dogA);

		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using assignment operator overload:\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog;

		*dogA = *dogB;
		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Cat class using copy constructor:\n" << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat(*catA);

		delete catA;
		delete catB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Cat class using assignment operator overload:\n" << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat;

		*catA = *catB;
		delete catA;
		delete catB;
	}
	return (0);
}