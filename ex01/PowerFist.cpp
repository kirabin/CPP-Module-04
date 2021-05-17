#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8) {}

PowerFist::PowerFist(const PowerFist& other) : AWeapon(other._name, other._APCost, other._damage) {}

PowerFist::~PowerFist() {}

PowerFist&	PowerFist::operator =(const PowerFist& other) {
	this->_name = other._name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
	return *this;
}

void			PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
