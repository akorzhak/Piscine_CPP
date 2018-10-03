#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

/*
****************************** HUMAN CLASS *************************************
*/

class Human
{

	private:

    	Brain _brain;

	public:

    	Human(void);
    	~Human(void);

    	Brain 		&getBrain(void);
    	std::string	identify(void);

};

#endif
