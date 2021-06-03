#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include <iostream>
# include <ostream>
# include "Victim.hpp"

class Sorcerer {

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& other);
		virtual ~Sorcerer();

		Sorcerer&		operator =(const Sorcerer& other);
		std::string		getName() const ;
		std::string		getTitle() const ;
		void			polymorph(const Victim& victim) const;

	private:
		Sorcerer();
		std::string	_name;
		std::string	_title;
};

std::ostream&		operator <<(std::ostream& out, const Sorcerer& other);

#endif
