#include "phonebook.hpp"

Contact recordContact(void)
{
	std::string	firstName,
				lastName,
				nickname,
				login,
				post,
				email,
				phone,
				meal,
				color,
				secret,
				birthday;

	Contact contact;

	displayGreenMessage(ADD_NEW);

	displayMessage(F_NAME);
	std::getline(std::cin, firstName);
	contact.setFirstName(firstName);

	displayMessage(L_NAME);
	std::getline(std::cin, lastName);
	contact.setLastName(lastName);

	displayMessage(NICK);
	std::getline(std::cin, nickname);
	contact.setNickname(nickname);

	displayMessage(LOGIN);
	std::getline(std::cin, login);
	contact.setLogin(login);

	displayMessage(POST);
	std::getline(std::cin, post);
	contact.setPost(post);

	displayMessage(EMAIL);
	std::getline(std::cin, email);
	contact.setEmail(email);

	displayMessage(PHONE);
	std::getline(std::cin, phone);
	contact.setPhone(phone);

	displayMessage(BIRTHDAY);
	std::getline(std::cin, birthday);
	contact.setBirthday(birthday);

	displayMessage(MEAL);
	std::getline(std::cin, meal);
	contact.setMeal(meal);

	displayMessage(COLOR);
	std::getline(std::cin, color);
	contact.setColor(color);

	displayMessage(SECRET);
	std::getline(std::cin, secret);
	contact.setSecret(secret);

	return contact;
}

int		main(void)
{
	int			index;
	std::string	command, dummy;
	Contact		contact;			
	Book		book;
	
	displayGreenMessage("Hi!\n");
	book.init();
	while (1)
	{
		displayCommandMessage();
		std::getline(std::cin, command);
		if (std::cin.eof()==1) 
			break ;
		if (command == "ADD")
		{
			if (book.isFull())
				displayWarningMessage(FULL_BOOK);
			else
			{
				contact = recordContact();
				if (!contact.isEmptyContact())
					book.addContact(contact);
				else
				{
					displayWarningMessage(WARNING);
					displayMessage(NOT_RECORDED_CONTACT);
				}
			}
		}
		else if (command == "SEARCH")
		{
			if (!book.displayAvailableContacts())
				continue ;
			displayYellowMessage(ENTER_INDEX);
			std::cin >> index;
			std::getline(std::cin, dummy);
			book.searchContact(index);
		}
		else if (command == "EXIT")
		{
			displayYellowMessage("Bye!\n");
			return 0;
		}
		else
			displayMessageEndl(USAGE);
	}
	return 0;
}
