#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& other);
		virtual ~PlasmaRifle();

		PlasmaRifle&	operator =(const PlasmaRifle& other);
		void	attack() const;
};

#endif
