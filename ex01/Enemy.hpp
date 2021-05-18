#ifndef ENEMY_HPP
# define ENEMY_HPP
# include "iostream"
# include "string"

class Enemy {

	public:
		Enemy(int hp, const std::string& type);
		Enemy(const Enemy& other);
		virtual ~Enemy();

		Enemy&	operator =(const Enemy& other);

		int				getHP() const;
		std::string		getType() const;
		virtual void	takeDamage(int damage);

	protected:
		int				_hitPoints;
		std::string		_type;
};

#endif
