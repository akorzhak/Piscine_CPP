#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

/*
****************************** VICTIM CLASS **********************************
*/

class Victim
{
	protected:

		std::string		_name;

		Victim(void);

	public:

		Victim(std::string name);
		Victim(Victim const & victim);
		~Victim(void);

		std::string		getName(void) const;

		Victim &		operator=(Victim const & victim);

		virtual void 	getPolymorphed(void) const;
};

std::ostream &			operator<<(std::ostream & o, Victim const &victim);

#endif