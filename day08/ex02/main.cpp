#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int> mutantStack;

	std::cout << "Check if the stack is empty: ";
	if (mutantStack.empty())
		std::cout << "empty" << std::endl;
	else
		std::cout << "not empty" << std::endl;

	std::cout << "Pushing 4 elements to stack..."  << std::endl;

	mutantStack.push(2);
	mutantStack.push(13);
	mutantStack.push(15);
	mutantStack.push(18);

	std::cout << "Size of stack: " << mutantStack.size() << std::endl;
	std::cout << "Top element: " << mutantStack.top() << std::endl;
	std::cout << "Applyin pop() function..." << std::endl;

	mutantStack.pop();

	std::cout << "Check if the stack is empty: ";
	if (mutantStack.empty())
		std::cout << "empty" << std::endl;
	else
		std::cout << "not empty" << std::endl;

	std::cout << "Size of stack: " << mutantStack.size() << std::endl;

	std::cout << "Pushing 4 more elements to stack..."  << std::endl;

	mutantStack.push(3);
	mutantStack.push(5);
	mutantStack.push(737);
	mutantStack.push(0);

	std::cout << "Size of stack: " << mutantStack.size() << std::endl;

	MutantStack<int>::iterator it = mutantStack.begin();
	MutantStack<int>::iterator ite = mutantStack.end();

	++it;
	--it;

	std::cout << "Displaying stack elements through iterating..." << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mutantStack);

	return 0;
}
