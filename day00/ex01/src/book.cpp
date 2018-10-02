#include "phonebook.hpp"

void		Book::init(void)
{
	int i;

	for (i = 0; i < 8; i++) 
    	contacts[i].empty = true; 
}

bool		Book::isFull(void)
{
	int i;

	i = 0;
	while (!contacts[i].empty)
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
	while (!contacts[i].empty)
	{
		i++;
		if (i >= 8)
			return false;
	}
	contacts[i] = contact;
	contacts[i].empty = false;
	return true;
}

void		truncateData(std::string str)
{
	char	buff[11];

	std::cout << std::setfill(' ') << std::setw(10);
	if (str.size() > 10)
	{
		str.copy(buff, 10, 0);
		buff[9] = '.';
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
	truncateData(contact.getFirstName());
	putchar('|');
	truncateData(contact.getLastName());
	putchar('|');
	truncateData(contact.getNickname());
	putchar('\n');
}

bool		Book::displayAvailableContacts(void)
{
	int i;

	i = 0;
	if (contacts[0].empty)
	{
		displayWarningMessage(EMPTY_BOOK);
		return false;
	}
	std::cout << BLUE << "     Index" << RESET << "|"
		<< GREEN << "First Name" << RESET << "|"
		<< YELLOW << " Last Name" << RESET << "|"
		<< PURPLE << " Nick Name" << RESET << std::endl;
	while ((i < 8) && (!contacts[i].empty))
	{
		overviewContact(contacts[i], i);
		i++;
	}
	return true;
}

void		Book::searchContact(int index)
{
	if ((index <= 0 || index > 8) || contacts[index - 1].empty)
	{
		displayWarningMessage(INVALID_INDEX);
	}
	displayMessageEndl("First Name: " + contacts[index - 1].getFirstName());	
}