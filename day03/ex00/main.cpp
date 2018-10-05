#include "FragTrap.hpp"

int		main(void)
{
    std::cout << "Fight!"<< std::endl;
    FragTrap    jim("Jim");
    FragTrap    alex("Alex");

    std::cout << "Ranged Attack: Jim hits Alex" << std::endl;
    jim.rangedAttack(alex.getName());
    alex.takeDamage(25);

    std::cout << "Melee Attack: Jim hits Alex" << std::endl;
    jim.meleeAttack(alex.getName());
    alex.takeDamage(35);

    std::cout << "Take Damage: Alex is out of hit points" << std::endl;
    alex.takeDamage(40);
    alex.takeDamage(42);

    std::cout << "Be Repaired: Alex is being healed" << std::endl;
    alex.beRepaired(20);
    alex.beRepaired(80);
    alex.beRepaired(100);

    std::cout << "Random Attack: Alex hits Jim" << std::endl;
    alex.vaulthunter_dot_exe(jim.getName());
    jim.takeDamage(30);

    alex.vaulthunter_dot_exe(jim.getName());
    jim.takeDamage(20);

    alex.vaulthunter_dot_exe(jim.getName());
    jim.takeDamage(10);

    return (0);
}
