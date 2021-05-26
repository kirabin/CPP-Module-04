#ifndef AMateria_hpp
# define AMateria_hpp
# include <string>
# include <limits>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:
		unsigned int	_xp;
		std::string		_type;

	public:
		AMateria(const std::string& type);
		virtual ~AMateria();

		const std::string& getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
