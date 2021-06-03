#ifndef DopeRobot_hpp
# define DopeRobot_hpp
# include <string>
# include <iostream>
# include "Enemy.hpp"

class DopeRobot : public Enemy {

	public:
		DopeRobot();
		DopeRobot(const DopeRobot& other);
		virtual ~DopeRobot();

		DopeRobot&	operator =(const DopeRobot& other);
};

#endif
