#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int     main(void)
{
    std::cout << "FRAGTRAP" << std::endl;

    std::cout << "Fight!"<< std::endl;

    FragTrap    jim("Jim");
    FragTrap    alex("Alex");

    std::cout << "Ranged Attack: Jim hits Alex" << std::endl;
    jim.rangedAttack(alex.getName());
    alex.takeDamage(alex.getRangedAttackDamage());

    std::cout << "Melee Attack: Jim hits Alex" << std::endl;
    jim.meleeAttack(alex.getName());
    alex.takeDamage(alex.getMeleeAttackDamage());

    std::cout << "Take Damage: Alex is out of hit points" << std::endl;
    jim.meleeAttack(alex.getName());
    alex.takeDamage(alex.getMeleeAttackDamage());

    jim.meleeAttack(alex.getName());
    alex.takeDamage(alex.getMeleeAttackDamage());

    jim.meleeAttack(alex.getName());
    alex.takeDamage(alex.getMeleeAttackDamage());

    jim.meleeAttack(alex.getName());
    alex.takeDamage(alex.getMeleeAttackDamage());

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

    std::cout << "SCAVTRAP" << std::endl;

    ScavTrap    julia("Julia");
    ScavTrap    jacob("Jacob");

    std::cout << "Ranged Attack: Julia hits Jacob" << std::endl;
    julia.rangedAttack(jacob.getName());
    jacob.takeDamage(jacob.getRangedAttackDamage());

    std::cout << "Melee Attack: Julia hits Jacob" << std::endl;
    julia.meleeAttack(jacob.getName());
    jacob.takeDamage(jacob.getMeleeAttackDamage());

    std::cout << "Take Damage: Jacob is out of hit points" << std::endl;
    julia.meleeAttack(jacob.getName());
    jacob.takeDamage(jacob.getMeleeAttackDamage());

    julia.meleeAttack(jacob.getName());
    jacob.takeDamage(jacob.getMeleeAttackDamage());

    julia.meleeAttack(jacob.getName());
    jacob.takeDamage(jacob.getMeleeAttackDamage());

    julia.meleeAttack(jacob.getName());
    jacob.takeDamage(jacob.getMeleeAttackDamage());

    std::cout << "Be Repaired: Jacob is being healed" << std::endl;
    jacob.beRepaired(20);
    jacob.beRepaired(80);
    jacob.beRepaired(100);

    std::cout << "Challenge" << std::endl;
    jacob.challengeNewcomer();
    julia.challengeNewcomer();

    jacob.challengeNewcomer();
    julia.challengeNewcomer();

    std::cout << "NINJATRAP" << std::endl;

    NinjaTrap    viki("Viki");
    NinjaTrap    mike("Mike");

    std::cout << "Ranged Attack: Viki hits mike" << std::endl;
    viki.rangedAttack(mike.getName());
    mike.takeDamage(mike.getRangedAttackDamage());

    std::cout << "Melee Attack: Viki hits mike" << std::endl;
    viki.meleeAttack(mike.getName());
    mike.takeDamage(mike.getMeleeAttackDamage());

    std::cout << "Take Damage: Mike is out of hit points" << std::endl;
    viki.meleeAttack(mike.getName());
    mike.takeDamage(mike.getMeleeAttackDamage());

    viki.meleeAttack(mike.getName());
    mike.takeDamage(mike.getMeleeAttackDamage());

    viki.meleeAttack(mike.getName());
    mike.takeDamage(mike.getMeleeAttackDamage());

    viki.meleeAttack(mike.getName());
    mike.takeDamage(mike.getMeleeAttackDamage());

    std::cout << "Be Repaired: Mike is being healed" << std::endl;
    mike.beRepaired(20);
    mike.beRepaired(80);
    mike.beRepaired(100);

    std::cout << "Shoebox Battle" << std::endl;
    mike.ninjaShoebox(jim);
    viki.ninjaShoebox(alex);

    mike.ninjaShoebox(julia);
    viki.ninjaShoebox(jacob);

    mike.ninjaShoebox(viki);
    viki.ninjaShoebox(mike);

    return (0);
}