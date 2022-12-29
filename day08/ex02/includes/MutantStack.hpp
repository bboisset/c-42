#ifndef DEF_MUTANTSTACK_HPP
# define DEF_MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) {}
	MutantStack(const MutantStack<T>& src)
	{ 
		*this = src; 
	}
	MutantStack<T>& operator=(const MutantStack<T>& rhs) 
	{
		if (this != &rhs)
			this->c = rhs.c;
		return *this;
	}
	~MutantStack(void) {}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void) { return this->c.begin(); }
	iterator end(void) { return this->c.end(); }

};
#endif