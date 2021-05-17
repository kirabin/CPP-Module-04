#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& name, int apcost, int damage) {
	this->_name = name;
	this->_APCost= apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(const AWeapon& other) {
	this->_name = other._name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
}

AWeapon::~AWeapon() {}

AWeapon&	AWeapon::operator =(const AWeapon& other) {
	this->_name = other._name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;

	return *this;
}

int			AWeapon::getAPCost() const {
	return this->_APCost;
}

int			AWeapon::getDamage() const {
	return this->_damage;
}
