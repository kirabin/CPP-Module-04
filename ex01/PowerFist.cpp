#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist& other) : AWeapon(other.name, other._APCost, other._damage) {}

PowerFist::~PowerFist() {}

PowerFist&	PowerFist::operator =(const PowerFist& other) {
	this->name = other.name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
	return *this;
}

void			PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
