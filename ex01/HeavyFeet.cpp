#include "HeavyFeet.hpp"

HeavyFeet::HeavyFeet() : AWeapon("Heavy Feet", 10, 11) {}

HeavyFeet::HeavyFeet(const HeavyFeet& other) : AWeapon(other.name, other._APCost, other._damage) {}

HeavyFeet::~HeavyFeet() {}

HeavyFeet&	HeavyFeet::operator =(const HeavyFeet& other) {
	this->name = other.name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
	return *this;
}

void			HeavyFeet::attack() const {
	std::cout << "* boom boom boom *" << std::endl;
}
