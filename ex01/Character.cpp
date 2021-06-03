#include "Character.hpp"

Character::Character(std::string const & name) {
	this->_name = name;
	this->_weapon = NULL;
	this->_action_points = 40;
	this->_max_action_points = 40;
}

Character::Character(const Character& other) {
	this->_name = other._name;
	this->_weapon = other._weapon;
	this->_action_points = other._action_points;
	this->_max_action_points = other._max_action_points;
}

Character::~Character() {}

Character&	Character::operator =(const Character& other) {
	this->_name = other._name;
	this->_weapon = other._weapon;
	this->_action_points = other._action_points;
	this->_max_action_points = other._max_action_points;
	return *this;
}

void	Character::recoverAP() {
	if (_action_points + 10 >= _max_action_points)
		_action_points = _max_action_points;
	else
		_action_points += 10;
}


void	Character::attack(Enemy* enemy) {
	if (this->_weapon) {
		if (this->_weapon->getAPCost() <= this->_action_points) {
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->name << std::endl;
			this->_weapon->attack();
			this->_action_points -= this->_weapon->getAPCost();
			enemy->takeDamage(this->_weapon->getDamage());
		}
		else {
			std::cout << "Not enough action points" << std::endl;
		}
	}
	else {
		std::cout << "Can't attack without a weapon" << std::endl;
	}
}

void	Character::equip(AWeapon* weapon) {
	this->_weapon = weapon;
}

std::string		Character::getName() const {
	return this->_name;
}

int				Character::getAP() const {
	return this->_action_points;
}

AWeapon*		Character::getWeapon() const {
	return this->_weapon;
}

std::ostream&	operator <<(std::ostream& out, const Character& character) {
	std::cout << character.getName() << " has ";
	std::cout << character.getAP() << " AP and " ;
	if (character.getWeapon()) {
		std::cout << "wields a " << character.getWeapon()->name << std::endl;
	} else {
		std::cout << "is unarmed" << std::endl;
	}
	return out;
}
