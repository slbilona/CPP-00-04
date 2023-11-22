class Contact {
public:
	int		index;
	int		NumeroDeTelephone;
	char	Prenom[100];
	char	NomDeFamille[100];
	char	Surnom[100];
	char	PlusLourdSecret[1000];
	Contact() {
		// Constructeur par défaut, ne fait rien
	}
};

class PhoneBook {
public:
	Contact contacts[8];
};