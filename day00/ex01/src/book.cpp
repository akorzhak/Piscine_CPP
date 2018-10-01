#include "phone_book.hpp"

void		Book::initBook(void)
{
	memset(contacts, 0, (8 * sizeof(Contact)));
}

bool		Book::addContact(Contact contact)
{
	int i;

	i = 0;
	while (contacts[i])
	{
		i++;
		if (i >= 8)
			return false;
	}
	contacts[i] = contact;
	return true;
}

void		overviewContact(Contact contact)
{
	
}

void		Book::displayContacts(void)
{
	int i;

	i = 0;
	if (!contacts[i])
	{
		std::cout << "Phone Book is empty!\n";
		return ;
	}
	while (i < 8 && contacts[i])
	{
		i++;
		overviewContact(contacts[i]);
	}
}