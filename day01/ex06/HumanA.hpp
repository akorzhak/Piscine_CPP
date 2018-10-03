#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

/*
****************************** HUMANA CLASS ************************************
*/

class HumanA
{
	private:

		std::string	_name;
		Weapon		&_weapon;

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void 		setWeapon(Weapon &weapon);
		void 		attack(void);
};

#endif
