#include "Harl.hpp"

int main()
{
	Harl monHarl;
	monHarl.complain("DEBUG");
	monHarl.complain("INFO");
	monHarl.complain("WARNING");
	monHarl.complain("ERROR");
	monHarl.complain("AUTRE");
	return 0;
}
