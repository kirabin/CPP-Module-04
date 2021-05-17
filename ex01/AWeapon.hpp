#include <string>
#include <iostream>

class AWeapon {

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon& other);
		virtual ~AWeapon();

		AWeapon&	operator =(const AWeapon& other);

		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;

	private:
		std::string		_name;
		int				_APCost;
		int				_damage;
};
