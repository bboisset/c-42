#ifndef DEF_SPAN_HPP
# define DEF_SPAN_HPP
# include <vector>
# include <span>
# include <iostream>

class Span
{
private:
	unsigned int				_size;
	std::vector<unsigned int>	_tab;

	unsigned int	getNumberDiff(unsigned int i, unsigned int j) const;

public:
	Span(unsigned int n);
	Span(Span const &span);
	~Span();
	Span &operator=(Span const &rhs);

	void	addNumber(int n);
	void 	addNumbers();


	void	printTab(void) const;
	

	unsigned int shortestSpan(void) const;
	unsigned int longestSpan(void) const;
	
	class SpanFullException : public std::exception{
		public:
			virtual const char *what() const throw();
	};

	class SpanTooShortException : public std::exception{
		public:
			virtual const char *what() const throw();
	};
};

#endif