#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::complain( std::string level )
{
	int index = 5;
	void(Harl::*fonctions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const char *str[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == str[i])
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
	case 0:
		for(int j = index; j < 4; j++)
			((this->*fonctions[j])());
		break;
	
	case 1:
		for(int j = index; j < 4; j++)
			((this->*fonctions[j])());
		break;

	case 2:
		for(int j = index; j < 4; j++)
			((this->*fonctions[j])());
		break;
	
	case 3:
		for(int j = index; j < 4; j++)
			((this->*fonctions[j])());
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	}