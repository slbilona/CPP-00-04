#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    //Création d'un ClapTrap
    ClapTrap clapTrap("Ilona");

    // Utilisation des fonctions de ClapTrap
    clapTrap.attack("Target1");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);

    // Création d'un ScavTrap
    ScavTrap scavTrap("Robot");

    // Utilisation des fonctions de ScavTrap
    scavTrap.attack("Target2");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(7);
    scavTrap.guardGate();

    return 0;
}
