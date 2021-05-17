#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& type) {
	this->_hitPoints = hp;
	this->_type = type;
}

Enemy::Enemy(const Enemy& other) {
	this->_hitPoints = other._hitPoints;
	this->_type = other._type;
}

Enemy::~Enemy() {}

Enemy&	Enemy::operator =(const Enemy& other) {
	this->_hitPoints = other._hitPoints;
	this->_type = other._type;
	return *this;
}

int			Enemy::getHP() const {
	return this->_hitPoints;
}

void		Enemy::takeDamage(int damage) {
	if (damage < 0)
		return ;
	else if (damage >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= damage;
}
