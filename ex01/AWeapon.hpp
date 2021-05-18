#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon {

	public:
		std::string		name;
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon& other);
		virtual ~AWeapon();

		AWeapon&	operator =(const AWeapon& other);

		int				getAPCost() const;
		void			setAPCost(int apcost);
		int				getDamage() const;
		void			setDamage(int damage);
		virtual void	attack() const = 0;

	protected:
		int				_APCost;
		int				_damage;
};

#endif
