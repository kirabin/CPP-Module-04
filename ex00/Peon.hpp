#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim {

	public:
		Peon(std::string name);
		Peon(const Peon& other);
		~Peon();

		void		getPolymorphed() const;
		Peon&		operator =(const Peon& other);
};

#endif
