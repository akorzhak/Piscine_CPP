#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

/*
******************************** MUTANTSTACK CLASS *****************************
*/

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		typedef std::stack<T> originalStack;
		typedef typename originalStack::container_type::iterator iterator;

		MutantStack(void){}
		MutantStack(MutantStack const & mStack): originalStack(mStack){}
		~MutantStack(void){}

		using 	originalStack::operator=;

		iterator	begin(void)
		{
			return originalStack::c.begin();
		}
		iterator	end(void)
		{
			return originalStack::c.end();
		}
};

#endif
