#ifndef Squad_hpp
# define Squad_hpp
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

	public:
		Squad();
		Squad(const Squad& other);
		~Squad();

		Squad&			operator =(const Squad& other);
		int				getCount() const;
		ISpaceMarine*	getUnit(int n) const;
		int				push(ISpaceMarine*);

	private:
		ISpaceMarine**	_units;
		int				_count;

		bool			_is_in_squad(ISpaceMarine* marine);
		void			_add_new_marine(ISpaceMarine* marine);
};

#endif
