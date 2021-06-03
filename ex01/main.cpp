#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "HeavyFeet.hpp"
#include "DopeRobot.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* super = new SuperMutant();
	Enemy* robot = new DopeRobot();
	std::cout << super->getHP() << std::endl;
	super->takeDamage(23);
	std::cout << super->getHP() << std::endl;
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* hf = new HeavyFeet();
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me << std::endl;

	me->equip(hf);
	std::cout << *me;
	me->attack(robot);
	std::cout << *me;
	delete pr;
	delete pf;
	delete hf;
	delete robot;
	delete super;
	delete me;
	return 0;
}
