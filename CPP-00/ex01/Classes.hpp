class Contact {
public:
	int		NumeroDeTelephone;
	char	Prenom[100];
	char	NomDeFamille[100];
	char	Surnom[100];
	char	PlusLourdSecret[1000];
	Contact() {
		NumeroDeTelephone = 0;
		strncpy(Prenom, "NULL", sizeof(Prenom) - 1);
		Prenom[sizeof(Prenom) - 1] = '\0';
		strncpy(NomDeFamille, "NULL", sizeof(NomDeFamille) - 1);
		NomDeFamille[sizeof(NomDeFamille) - 1] = '\0';
		strncpy(Surnom, "NULL", sizeof(Surnom) - 1);
		Surnom[sizeof(Surnom) - 1] = '\0';
		strncpy(PlusLourdSecret, "NULL", sizeof(PlusLourdSecret) - 1);
		PlusLourdSecret[sizeof(PlusLourdSecret) - 1] = '\0';
	}
};

class PhoneBook {
public:
	Contact contacts[8];
};