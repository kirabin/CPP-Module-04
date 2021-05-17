#ifndef RadScorpion_hpp
# define RadScorpion_hpp
# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

	public:
		RadScorpion();
		RadScorpion(const RadScorpion& other);
		~RadScorpion();

		RadScorpion&	operator =(const RadScorpion& other);
};

#endif
