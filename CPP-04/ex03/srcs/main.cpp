
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
	//ft_tests();

	{
		std::cout << "------------- test sujet -------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{

		std::cout << "\n------------- test 01 -------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		Character* ilo = new Character("Ilona");
		ICharacter* eli = new Character(*ilo); // constructeur de copie
		Character* lise = ilo; // opérateur d'assignation
		AMateria* materiel = src->createMateria("ice");
		ilo->equip(materiel);
		AMateria* materiel1 = src->createMateria("eau"); // Ce type n'existe pas
		ilo->equip(materiel1);
		AMateria* materiel2 = src->createMateria("cure");
		ilo->equip(materiel2);
		AMateria* materiel3 = src->createMateria("cure");
		eli->equip(materiel3);
		AMateria* materiel4 = src->createMateria("ice");
		eli->equip(materiel4);
		AMateria* materiel5 = src->createMateria("ice");
		lise->equip(materiel5);
		AMateria* materiel6 = src->createMateria("ice");
		lise->equip(materiel6);

		// Utilisation des Materias
		lise->use(1, *ilo);
		eli->use(0, *lise);
		eli->use(5, *ilo);
		ilo->unequip(1);
		ilo->use(1, *eli);

		// Libération de la mémoire
		delete ilo;
		delete eli;
		delete materiel2;
		delete src;

	}

    //     // Création de deux instances de Character
    // Character character1("Alice");
    // Character character2("Bob");

    // // Copie des valeurs de character1 vers character2
    // character2 = character1;

    // // Affichage initial
    // std::cout << "Avant les modifications :\n";
    // std::cout << "Character1 : ";
    // character1.use(0, character2); // Affiche l'inventaire de character1
    // std::cout << "Character2 : ";
    // character2.use(0, character1); // Affiche l'inventaire de character2

    // // Modifications sur character1
    // character1.equip(new Ice());
	// character1.getMateria(0);
    // character1.unequip(0);

    // // Affichage après les modifications
    // std::cout << "\nAprès les modifications :\n";
    // std::cout << "Character1 : ";
    // character1.use(0, character2); // Affiche l'inventaire de character1
    // std::cout << "Character2 : ";
    // character2.use(0, character1); // Affiche l'inventaire de character2

	return (0);
}