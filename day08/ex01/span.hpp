#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

/*
************************************ SPAN CLASS ********************************
*/

class Span
{
	private:

		std::vector<int>	_ints;
		unsigned int 		_n;

	public:

		class SpanOverflow : public std::exception
		{
			public:

				SpanOverflow(void);
				SpanOverflow(SpanOverflow const & span);
				~SpanOverflow(void) throw();
				SpanOverflow & operator=(SpanOverflow const &);
				virtual const char	*what() const throw();
		};

		class NoSpan : public std::exception
		{
			public:

				NoSpan(void);
				NoSpan(NoSpan const & span);
				~NoSpan(void) throw();
				NoSpan & operator=(NoSpan const &);
				virtual const char	*what() const throw();
		};

		Span(void);
		Span(unsigned int n);
		Span(Span const & span);
		~Span(void);
		Span & operator=(Span const & span);

		void				addNumber(int nb) throw (SpanOverflow);

		int 				shortestSpan(void) throw (NoSpan);
		int 				longestSpan(void) throw (NoSpan);
};

#endif
