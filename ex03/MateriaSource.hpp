#ifndef MateriaSource_hpp
#define MateriaSource_hpp
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		virtual ~MateriaSource();

		MateriaSource&	operator =(const MateriaSource& other);
		void			learnMateria(AMateria* m);
		AMateria*		createMateria(const std::string& type);

	private:
		static const int	_max_slots = 4;
		int					_slots_count;
		AMateria*			_materia_slots[_max_slots];
};

#endif
