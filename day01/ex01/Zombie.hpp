# include <string>
# include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		void	announce(void);
		void	setName(std::string newName);
		Zombie(void);
		~Zombie();
};

Zombie*	zombieHorde( int N, std::string name );