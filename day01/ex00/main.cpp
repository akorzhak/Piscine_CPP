#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *heapPony = new Pony();

	heapPony->setFluffy(true);
	if (heapPony->getFluffy())
		std::cout << "The Pony is Fluffy!\n";
	else
		std::cout << "The Pony is not Fluffy!\n";
	heapPony->setWeight(20);
	std::cout << "The Pony weights " << heapPony->getWeight() << " kg.\n";
	heapPony->setAge(2);
	std::cout << "The Pony is " << heapPony->getAge() << " years old.\n";
	heapPony->setName("Julia");
	std::cout << "Pony's name is " << heapPony->getName() << "!\n";
	delete heapPony;
}

void	ponyOnTheStack(void)
{
	Pony stackPony;

	stackPony.setFluffy(false);
	if (stackPony.getFluffy())
		std::cout << "The Pony is Fluffy!\n";
	else
		std::cout << "The Pony is not Fluffy!\n";
	stackPony.setWeight(25);
	std::cout << "The Pony weights " << stackPony.getWeight() << " kg.\n";
	stackPony.setAge(3);
	std::cout << "The Pony is " << stackPony.getAge() << " years old.\n";
	stackPony.setName("Bob");
	std::cout << "Pony's name is " << stackPony.getName() << "!\n";
}

int		main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return 0;
}
