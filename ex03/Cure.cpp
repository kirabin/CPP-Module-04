#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::Cure(const Cure& other) : AMateria("Cure") {
	*this = other;
}

Cure::Cure(const AMateria* other) : AMateria("Cure") {
	this->_type = other->getType();
	this->_xp = other->getXP();
}

Cure::~Cure() {

}

Cure&	Cure::operator =(const Cure& other) {
	this->_type = other.getType();
	this->_xp = other.getXP();
	return *this;
}

AMateria* Cure::clone() const {
	Cure* copy = new Cure;

	copy->_type = this->_type;
	copy->_xp = this->_xp;
	return copy;
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
