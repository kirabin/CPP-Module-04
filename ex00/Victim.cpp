#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& other) {
	this->_name = other._name;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim&	Victim::operator =(const Victim& other) {
	this->_name = other._name;
	return *this;
}

std::string			Victim::getName() const {
	return this->_name;
}

void			Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&		operator <<(std::ostream& out, const Victim& other) {
	out << "I'm " << other.getName() << " and I like otters!" << std::endl;
	return out;
}
