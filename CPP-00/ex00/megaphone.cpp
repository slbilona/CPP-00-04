#include <iostream>
#include <cctype>

std::string EnMaj(const std::string& str)
{
	std::string resultat = str; // creer une string qui contient la mm chose que str
	for(std::string::size_type i = 0; i < resultat.length(); ++i)
	{
		resultat[i] = std::toupper(resultat[i]);
	}
	return resultat;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		for(int i = 1; i < argc; i++)
		{
			std::cout << EnMaj(argv[i]) << " "; // affiche le resultat de EnMaj puis un espace
		}
		std::cout << "\n";
	}
	return 0;
}