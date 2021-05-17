#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) : AWeapon(other._name, other._APCost, other._damage) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle&	PlasmaRifle::operator =(const PlasmaRifle& other) {
	this->_name = other._name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
	return *this;
}

void			PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
