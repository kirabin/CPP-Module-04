#ifndef TacticalMarine_hpp
# define TacticalMarine_hpp
# include "ISpaceMarine.hpp"
# include <string>

class TacticalMarine : public ISpaceMarine {

	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& other);
		virtual ~TacticalMarine();

		TacticalMarine&	operator =(const TacticalMarine& other);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;

	private:
		std::string _name;
};

#endif
