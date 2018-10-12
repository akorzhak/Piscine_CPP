#include "span.hpp"

int main()
{
	int span;

	std::cout << "Span of 1 item..." << std::endl << std::endl;

	Span sp1 = Span(1);

	try
	{
		sp1.addNumber(5);
		std::cout << "number 5 is added" << std::endl;
	}
	catch (Span::SpanOverflow & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		span = sp1.shortestSpan();
		std::cout << "Shortest span: " << span << std::endl;
		span = sp1.longestSpan();
		std::cout << "Longest span: " << span << std::endl;
	}
	catch (Span::NoSpan & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Span of 5 items..." << std::endl << std::endl;

	Span sp = Span(5);

	std::cout << "Intentionally add 6 numbers in 5-number-span..." << std::endl;
	try
	{
		sp.addNumber(5);
		std::cout << "number 5 is added" << std::endl;
		sp.addNumber(3);
		std::cout << "number 3 is added" << std::endl;
		sp.addNumber(17);
		std::cout << "number 17 is added" << std::endl;
		sp.addNumber(9);
		std::cout << "number 9 is added" << std::endl;
		sp.addNumber(11);
		std::cout << "number 11 is added" << std::endl;
		sp.addNumber(22);
		//next string won't be executed
		std::cout << "number 22 is added" << std::endl;
	}
	catch (Span::SpanOverflow & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		span = sp.shortestSpan();
		std::cout << "Shortest span: " << span << std::endl;
		span = sp.longestSpan();
		std::cout << "Longest span: " << span << std::endl;
	}
	catch (Span::NoSpan & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Span of 10000 items..." << std::endl << std::endl;

	Span sp2 = Span(10000);

	try
	{
		for (int i = 0; i < 10000; ++i)
		{
			sp2.addNumber(i);
		}
	}
	catch (Span::SpanOverflow & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		span = sp2.shortestSpan();
		std::cout << "Shortest span: " << span << std::endl;
		span = sp2.longestSpan();
		std::cout << "Longest span: " << span << std::endl;
	}
	catch (Span::NoSpan & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}