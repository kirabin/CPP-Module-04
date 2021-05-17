#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& other) : Enemy(other._hitPoints, other._type) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator =(const SuperMutant& other) {
	this->_hitPoints = other._hitPoints;
	this->_type = other._type;
	return *this;
}

void		SuperMutant::takeDamage(int damage) {
	damage -= 3;
	if (damage < 0)
		return ;
	else if (damage >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= damage;
}
