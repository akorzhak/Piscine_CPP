#include "phone_book.hpp"

bool		Book::isFull(void)
{
	int i;

	i = 0;
	while (contacts[i].firstName != 0)
	{
		i++;
		if (i >= 8)
			return true;
	}
	return false;
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

void		truncateData(std::string str)
{
	char	buff[11];

	std::cout << std::setfill(' ') << std::setw(10);
	if (str.size() > 10)
	{
		str.copy(buff, 10, 0);
		buff[10] = '\0';
		std::cout << buff;
	}
	else
		std::cout << str;
}

void		overviewContact(Contact contact, int i)
{
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << (i + 1) << "|";
	truncateData(contact->firstName);
	putchar('|');
	truncateData(contact->lastName);
	putchar('|');
	truncateData(contact->nickname);
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
	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	while (i < 8 && contacts[i])
	{
		i++;
		overviewContact(contacts[i], i);
	}
}