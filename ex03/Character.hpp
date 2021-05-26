#ifndef Character_hpp
# define Character_hpp
# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {

	public:
		Character(std::string name);
		Character(const Character& other);
		virtual ~Character();

		Character&	operator =(const Character& other);

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string			_name;
		int					_slots_count;
		static const int	_max_slots = 4;

		AMateria*	_materia_slots[_max_slots];
};

#endif
