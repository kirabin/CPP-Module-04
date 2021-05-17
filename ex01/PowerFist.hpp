#ifndef PowerFist_hpp
# define PowerFist_hpp
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public:
		PowerFist();
		PowerFist(const PowerFist& other);
		virtual ~PowerFist();

		PowerFist&	operator =(const PowerFist& other);
		void		attack() const;
};

#endif
