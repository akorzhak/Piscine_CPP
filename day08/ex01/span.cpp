#include "span.hpp"

Span::Span(void): _n(0){}

Span::Span(unsigned int n): _n(n)
{
	_ints.reserve(_n);
}

Span::Span(Span const & span)
{
	*this = span;
}

Span::~Span(void){}

Span & Span::operator=(Span const & span)
{
	this->_ints = span._ints;
	this->_n = span._n;

	return *this;
}

/*
** Exception. SpanOverflow.
*/

Span::SpanOverflow::SpanOverflow(void){}

Span::SpanOverflow::SpanOverflow(Span::SpanOverflow const & span)
{
	*this = span;
}

Span::SpanOverflow::~SpanOverflow(void) throw() {}

Span::SpanOverflow & Span::SpanOverflow::operator=(Span::SpanOverflow const &)
{
	return *this;
}

const char	*Span::SpanOverflow::what() const throw()
{
	return ("Warning: Span is full. Value has not been inserted.");
}

/*
** Exception. NoSpan.
*/

Span::NoSpan::NoSpan(void){}

Span::NoSpan::NoSpan(Span::NoSpan const & span)
{
	*this = span;
}

Span::NoSpan::~NoSpan(void) throw() {}

Span::NoSpan & Span::NoSpan::operator=(Span::NoSpan const &)
{
	return *this;
}

const char	*Span::NoSpan::what() const throw()
{
	return ("Warning: Span can't be defined. No any or only one number is stored.");
}

/*
** Member functions
*/

void			Span::addNumber(int nb) throw (SpanOverflow)
{
	if (_ints.size() == _n)
		throw (Span::SpanOverflow());
	else
		_ints.push_back(nb);
}

int 			Span::shortestSpan(void) throw (NoSpan)
{
	std::vector<int>	vec = _ints;
	std::vector<int>::iterator it = vec.begin();

	if (_n <= 1)
		throw (Span::NoSpan());
	
	std::sort(vec.begin(), vec.end());
	it++;
	return (*(it) - *(vec.begin()));
}

int 			Span::longestSpan(void) throw (NoSpan)
{
	std::vector<int>	vec = _ints;

	if (_n <= 1)
		throw (Span::NoSpan());

	std::sort(vec.begin(), vec.end());
	return (*(--vec.end()) - *(vec.begin()));
}
