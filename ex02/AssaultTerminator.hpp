#ifndef AssaultTerminator_hpp
# define AssaultTerminator_hpp
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator& other);
		~AssaultTerminator();

		AssaultTerminator&	operator =(const AssaultTerminator& other);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
