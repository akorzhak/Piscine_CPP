#include "Human.hpp"

Human::Human(void)
{
    std::cout << "Human is alive\n";
}

Human::~Human(void)
{
    std::cout << "Human is dead\n";
}

Brain		&Human::getBrain(void)
{
    return (this->_brain);
}

std::string	Human::identify(void)
{
    return (this->_brain.identify());
}
