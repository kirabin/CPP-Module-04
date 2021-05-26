#ifndef Cure_hpp
# define Cure_hpp
# include "AMateria.hpp"
# include <string>
# include <iostream>

class Cure : public AMateria {

	public:
		Cure();
		Cure(const Cure& other);
		Cure(const AMateria* other);
		~Cure();

		Cure&	operator =(const Cure& other);
		AMateria* clone() const;
		void use(ICharacter& target);

	private:

};

#endif
