#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) : AWeapon(other.name, other._APCost, other._damage) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle&	PlasmaRifle::operator =(const PlasmaRifle& other) {
	this->name = other.name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
	return *this;
}

void			PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
