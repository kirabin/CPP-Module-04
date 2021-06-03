#ifndef Character_hpp
# define Character_hpp
# include <string>
# include <iostream>
# include <ostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

	public:
		Character(std::string const & name);
		Character(const Character& other);
		virtual ~Character();
		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(Enemy* enemy);
		std::string	getName() const;
		AWeapon*	getWeapon() const;
		int			getAP() const;

		Character&	operator =(const Character& other);

	private:
		std::string		_name;
		AWeapon*		_weapon;
		int				_action_points;
		int				_max_action_points;

};

std::ostream&	operator <<(std::ostream& out, const Character& character);

#endif
