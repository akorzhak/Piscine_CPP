#include "phone_book.hpp"

int		main(void)
{
	int birthday;
	std::string str;

	Contact contact;
	
	std::cout << "Let's add a new contact\n";

	std::cout << "Enter the First Name: ";
	std::getline(std::cin, str);
	contact.setFirstName(str);

	std::cout << "Enter the Last Name: ";
	std::getline(std::cin, str);
	contact.setLastName(str);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, str);
	contact.setNickname(str);

	std::cout << "Enter Login: ";
	std::getline(std::cin, str);
	contact.setLogin(str);

	std::cout << "Enter Postal Address: ";
	std::getline(std::cin, str);
	contact.setPost(str);

	std::cout << "Enter Email Address: ";
	std::getline(std::cin, str);
	contact.setEmail(str);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, str);
	contact.setPhone(str);

	std::cout << "Enter Birthday Date: ";
	std::cin >> birthday;
	contact.setBirthday(birthday);

	std::cout << "Enter Favorite Meal: ";
	std::getline(std::cin, str);
	contact.setMeal(str);

	std::cout << "Enter Underwear Color: ";
	std::getline(std::cin, str);
	contact.setColor(str);

	std::cout << "Enter the Darkest Secret: ";
	std::getline(std::cin, str);
	contact.setSecret(str);

	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	return 0;
}