#include "../includes/Span.hpp"

/**
 * Create a new Span object of size n
 * @param n The size of the Span object
 */
Span::Span(unsigned int n)
	: _size(n), _tab(std::vector<unsigned int>())
{
}

/**
 * Copy constructor
 * @param span The Span object to copy
 */
Span::Span(Span const &span)
	: _size(span._size), _tab(span._tab)
{
}

/**
 * Destructor
 */
Span::~Span()
{
	// delete[] _tab;
}

/**
 * Assignation operator
 * @param other The Span object to assign
 * @return A reference to the assigned Span object
 */
Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_size = rhs._size;
		_tab = rhs._tab;
	}
	return (*this);
}

/**
 * Add a number to the Span object
 * @param n The number to add
 */
void Span::addNumber(int n)
{
	if (this->_tab.size() == this->_size)
		throw Span::SpanFullException();
	this->_tab.push_back(n);
}

void Span::printTab(void) const
{
	std::cout << "[";
	for (unsigned int i = 0; i < this->_tab.size(); i++)
	{
		std::cout << this->_tab[i];
		if (i != this->_tab.size() - 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

unsigned int Span::getNumberDiff(unsigned int i, unsigned int j) const
{
	if (i > j)
		return (i - j);
	return (j - i);
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_tab.size() < 2)
		throw Span::SpanTooShortException();
	unsigned int min = this->getNumberDiff(this->_tab[0], this->_tab[1]);

	for (std::vector<unsigned int>::const_iterator it = this->_tab.begin(); it != this->_tab.end(); it++)
	{
		for (std::vector<unsigned int>::const_iterator it2 = it + 1; it2 != this->_tab.end(); it2++)
		{
			if (min > this->getNumberDiff(*it, *it2))
				min = this->getNumberDiff(*it, *it2);
		}
	}
	return (min);
}


unsigned int Span::longestSpan(void) const
{
	if (this->_tab.size() < 2)
		throw Span::SpanTooShortException();
	unsigned int max = this->getNumberDiff(this->_tab[1], this->_tab[0]);

	for (std::vector<unsigned int>::const_iterator it = this->_tab.begin(); it != this->_tab.end(); it++)
	{
		for (std::vector<unsigned int>::const_iterator it2 = it + 1; it2 != this->_tab.end(); it2++)
		{
			unsigned int diff = this->getNumberDiff(*it, *it2);
			if (max < diff)
				max = diff;
		}
	}
	return (max);
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Span is full");
}

const char *Span::SpanTooShortException::what() const throw()
{
	return ("Span should contain at least 2 numbers");
}
