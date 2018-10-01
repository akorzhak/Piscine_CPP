#include "phone_book.hpp"

int		main(void)
{
	record
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
	
	std::cout << "Let's add a new contact\n";

	std::cout << "Enter the First Name: ";
	std::getline(std::cin, firstName);
	contact.setFirstName(firstName);

	std::cout << "Enter the Last Name: ";
	std::getline(std::cin, lastName);
	contact.setLastName(lastName);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nickname);
	contact.setNickname(nickname);

	std::cout << "Enter Login: ";
	std::getline(std::cin, login);
	contact.setLogin(login);

	std::cout << "Enter Postal Address: ";
	std::getline(std::cin, post);
	contact.setPost(post);

	std::cout << "Enter Email Address: ";
	std::getline(std::cin, email);
	contact.setEmail(email);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phone);
	contact.setPhone(phone);

	std::cout << "Enter Birthday Date: ";
	std::getline(std::cin, birthday);
	contact.setBirthday(birthday);

	std::cout << "Enter Favorite Meal: ";
	std::getline(std::cin, meal);
	contact.setMeal(meal);

	std::cout << "Enter Underwear Color: ";
	std::getline(std::cin, color);
	contact.setColor(color);

	std::cout << "Enter the Darkest Secret: ";
	std::getline(std::cin, secret);
	contact.setSecret(secret);

	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	return 0;
}