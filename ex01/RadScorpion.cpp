#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy (80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other) : Enemy(other._hitPoints, other._type) {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator =(const RadScorpion& other) {
	this->_hitPoints = other._hitPoints;
	this->_type = other._type;
	return *this;
}
