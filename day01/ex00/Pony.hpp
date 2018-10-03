#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

/*
****************************** PONY CLASS **************************************
*/

class Pony
{
	private:

		bool		fluffy;
		int			weight;
		int			age;
		std::string	name;

	public:

		Pony(void);
		~Pony(void);

		void		setFluffy(bool fluffy);
		void		setWeight(int weight);
		void		setAge(int age);
		void		setName(std::string name);

		bool		getFluffy(void);
		int			getWeight(void);
		int			getAge(void);
		std::string	getName(void);
};

#endif
