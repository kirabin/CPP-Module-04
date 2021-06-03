#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Goblin.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Goblin gor("Gor");

	std::cout << robert << jim << joe << gor;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(gor);

	return 0;
}
