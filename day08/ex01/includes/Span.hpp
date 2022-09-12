#ifndef DEF_SPAN_HPP
# define DEF_SPAN_HPP

class Span {
    public:
        Span(unsigned int n);

        void addNumber(int n);

        unsigned int shortestSpan(void) const;
        unsigned int longestSpan(void) const;
};

#endif