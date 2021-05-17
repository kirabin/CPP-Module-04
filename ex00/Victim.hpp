#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>
# include <ostream>

class Victim {

	public:
		Victim(std::string name);
		Victim(const Victim& other);
		~Victim();

		Victim&			operator =(const Victim& other);
		std::string		getName() const;
		virtual void	getPolymorphed() const; //TODO: virtual member functions in-depth

	protected:
		std::string		_name;
};

std::ostream&		operator <<(std::ostream& out, const Victim& other);

#endif
