#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& name, int apcost, int damage) {
	this->name = name;
	this->setAPCost(apcost);
	this->setDamage(damage);
}

AWeapon::AWeapon(const AWeapon& other) {
	this->name = other.name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
}

AWeapon::~AWeapon() {}

AWeapon&	AWeapon::operator =(const AWeapon& other) {
	this->name = other.name;
	this->_APCost= other._APCost;
	this->_damage = other._damage;
	return *this;
}

int			AWeapon::getAPCost() const {
	return this->_APCost;
}

void		AWeapon::setAPCost(int apcost) {
	if (apcost < 0) {
		this->_APCost = 0;
	} else {
		this->_APCost = apcost;
	}
}

int			AWeapon::getDamage() const {
	return this->_damage;
}

void		AWeapon::setDamage(int damage) {
	if (damage < 0) {
		this->_damage = 0;
	} else {
		this->_damage = damage;
	}
}
