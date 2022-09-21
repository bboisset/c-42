#ifndef DEF_BASE_HPP
# define DEF_BASE_HPP
# define DEBUG true
# include <iostream>

class Base
{
  public:
	virtual ~Base()
	{
	}
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base& p);

#endif