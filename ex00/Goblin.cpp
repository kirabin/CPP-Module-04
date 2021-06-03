#include "Goblin.hpp"

Goblin::Goblin(std::string name) : Victim(name) {
	std::cout << "Greeny pants." << std::endl;
}

Goblin::Goblin(const Goblin& other) : Victim(other.getName()) {
	std::cout << "Greeny pants." << std::endl;
}

Goblin::~Goblin() {
	std::cout << "O*&$Piu_H." << std::endl;
}

Goblin&	Goblin::operator =(const Goblin& other) {
	Victim(other.getName());
	return *this;
}

void	Goblin::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a green goblin! Oh, he's immune!" << std::endl;
}
