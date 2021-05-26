#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->_slots_count = 0;
	for (int i = 0; i < _max_slots; i++) {
		delete this->_materia_slots[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _max_slots; i++) {
		delete this->_materia_slots[i];
	}
}

MateriaSource&	MateriaSource::operator =(const MateriaSource& other) {
	for (int i = 0; i < _max_slots; i++) {
		delete this->_materia_slots[i];
	}
	this->_slots_count = other._slots_count;
	for (int i = 0; i < _max_slots; i++) {
		this->_materia_slots[i] = other._materia_slots[i];
	}
	return *this;
}


void			MateriaSource::learnMateria(AMateria* m) {
	if (m) {
		if (_slots_count == _max_slots) {
			std::cout << "Materia slots are full" << std::endl;
		} else {
			_materia_slots[_slots_count - 1] = m;
			_slots_count++;
		}
	} else {
		std::cout << "Can't learn NULL" << std::endl;
	}
}

AMateria*		MateriaSource::createMateria(const std::string& type) {

	for (int i = 0; i < _slots_count; i++) {
		if (this->_materia_slots[i]->getType() == type) {
			return this->_materia_slots[i]->clone();
		}
	}
	return NULL;
}
