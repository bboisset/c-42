#ifndef DEF_ARRAY_HPP
# define DEF_ARRAY_HPP
# include <cstddef>
# include <iostream>

template <class T>
class Array {

public:
	Array(void);
	Array(unsigned int n);
	Array(Array const & src);

	Array & operator=(Array const & rhs);
	T & operator[](unsigned int n);

	void			setSize(const unsigned int length);
	unsigned int	size(void) const;
	
	void			insert(const T element, const unsigned int index);
	T				get(const unsigned int index) const;

private:
	unsigned int _size;
	T * _elements;

};

template<typename T>
Array<T>::Array(void) {
	this->setSize(0);
	_elements = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->setSize(n);
	_elements = new T[n];
}

template<typename T>
Array<T>::Array(Array const & rhs)
{
	if (this == &rhs)
		return ;
	this->setSize(rhs.size());
	_elements = new T[rhs.size()];
	for (unsigned int i = 0; i < rhs.size(); i++)
		_elements[i] = rhs.get(i);
}

template<typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->setSize(rhs.size());
	_elements = new T[rhs.size()];
	for (unsigned int i = 0; i < rhs.size(); i++)
		_elements[i] = rhs.get(i);
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int n)
{
	if (n >= this->size())
		throw std::exception();
	return _elements[n];
}


template<typename T>
void	Array<T>::setSize(const unsigned int length)
{
	this->_size = length;
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

template<typename T>
void	Array<T>::insert(const T element, const unsigned int index)
{
	if (this->size() > 0)
		this->_elements[index] = element;
}

template<typename T>
T	Array<T>::get(const unsigned int index) const
{
	return (this->_elements[index]);
}

#endif