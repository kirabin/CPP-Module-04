#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other) {
	this->_name = other._name;
	this->_title = other._title;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", ";
	std::cout << this->_title << ", is dead. ";
	std::cout << "Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator =(const Sorcerer& other) {
	this->_name = other._name;
	this->_title = other._title;
	return *this;
}

std::string		Sorcerer::getName() const {
	return this->_name;
}

std::string		Sorcerer::getTitle() const {
	return this->_title;

}

void		Sorcerer::polymorph(const Victim& victim) const {
	victim.getPolymorphed();
}

std::ostream&		operator <<(std::ostream& out, const Sorcerer& other) {
	out << "I am " << other.getName() << ", ";
	out << other.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}
