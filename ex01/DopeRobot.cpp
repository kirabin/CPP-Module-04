#include "DopeRobot.hpp"

DopeRobot::DopeRobot() : Enemy (23, "DopeRobot") {
	std::cout << "* bip boop *" << std::endl;
}

DopeRobot::DopeRobot(const DopeRobot& other) : Enemy(other._hitPoints, other._type) {
	std::cout << "* bip boop *" << std::endl;
}

DopeRobot::~DopeRobot() {
	std::cout << "* Screach *" << std::endl;
}

DopeRobot&	DopeRobot::operator =(const DopeRobot& other) {
	this->_hitPoints = other._hitPoints;
	this->_type = other._type;
	return *this;
}
