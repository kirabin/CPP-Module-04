#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP
# include "iostream"
# include "string"
# include "Enemy.hpp"

class SuperMutant : public Enemy {

	public:
		SuperMutant();
		SuperMutant(const SuperMutant& other);
		virtual ~SuperMutant();

		SuperMutant&	operator =(const SuperMutant& other);
		void			takeDamage(int damage);
};

#endif
