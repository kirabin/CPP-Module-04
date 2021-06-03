#ifndef HeavyFeet_HPP
# define HeavyFeet_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class HeavyFeet : public AWeapon {

	public:
		HeavyFeet();
		HeavyFeet(const HeavyFeet& other);
		virtual ~HeavyFeet();

		HeavyFeet&	operator =(const HeavyFeet& other);
		void	attack() const;
};

#endif
