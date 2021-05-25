#ifndef ISpaceMarine_hpp
# define ISpaceMarine_hpp
# include <string>

class ISpaceMarine {

	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;

	protected:
		std::string		_name;
};

#endif
