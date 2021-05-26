#ifndef IMateriaSource_hpp
# define IMateriaSource_hpp
# include "AMateria.hpp"
# include <string>

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif
