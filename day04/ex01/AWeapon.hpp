#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

/*
****************************** AWEAPON CLASS **********************************
*/

class AWeapon
{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_actionPoints;

	public:

		AWeapon(void);
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & aweapon);
		virtual ~AWeapon(void);

        std::string		getName() const;
        int				getAPCost() const;
        int				getDamage() const;

        virtual void 	attack() const = 0;

        AWeapon &operator=(AWeapon const &aweapon);
};

#endif
