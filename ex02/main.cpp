#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <string>
#include <iostream>

int main()
{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;

		std::cout << std::endl;

		Squad a;
		ISpaceMarine* tm = new TacticalMarine;
		ISpaceMarine* at = new AssaultTerminator;
		a.push(tm);
		a.push(at);
		Squad b = a;
		return 0;
}
