#ifndef Goblin_HPP
# define Goblin_HPP
# include "Victim.hpp"

class Goblin : public Victim {

	public:
		Goblin(std::string name);
		Goblin(const Goblin& other);
		virtual ~Goblin();

		void		getPolymorphed() const;
		Goblin&		operator =(const Goblin& other);
};

#endif
