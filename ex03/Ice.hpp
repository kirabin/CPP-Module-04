#ifndef Ice_hpp
# define Ice_hpp
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>
# include <iostream>

class Ice : public AMateria {

	public:
		Ice();
		Ice(const Ice& other);
		Ice(const AMateria* other);
		virtual ~Ice();

		Ice&	operator =(const Ice& other);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
