#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>
# include <cstdio>

/*
****************************** STRING CONSTANTS ******************************
*/
# define ADD_NEW "Let's add a new contact\n"
# define F_NAME "Enter the First Name: "
# define L_NAME "Enter the Last Name: "
# define NICK "Enter Nickname: "
# define LOGIN "Enter Login: "
# define POST "Enter Postal Address: "
# define EMAIL "Enter Email Address: "
# define PHONE "Enter Phone Number: "
# define BIRTHDAY "Enter Birthday Date: "
# define MEAL "Enter Favorite Meal: "
# define COLOR "Enter Underwear Color: "
# define SECRET "Enter the Darkest Secret: "
# define WARNING "WARNING! "
# define ENTER_INDEX "Enter the contact's INDEX to see detailed info: "
# define NOT_RECORDED_CONTACT "Contact has NOT been recorded!\n"\
				"At least 1 field from 'First Name', 'Last Name' or 'Nickname'"\
				" and 1 field from  Phone number has to be indicated.\n"
# define FULL_BOOK "Sorry, the Phone Book is full.\n"
# define EMPTY_BOOK "Phone Book is empty!\n"
# define INVALID_INDEX "There is NO any record under indicated index!\n"				
# define USAGE "usage: ./phonebook [ ADD | SEARCH | EXIT ]"

/*
****************************** COLOR CONSTANTS ********************************
*/
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"
# define RESET "\033[0m"

/*
****************************** MESSAGES FUNCTIONS ******************************
*/
void	displayCommandMessage();
void	displayWarningMessage(std::string message);
void	displayGreenMessage(std::string message);
void	displayYellowMessage(std::string message);
void	displayMessage(std::string message);
void	displayMessageEndl(std::string message);

/*
****************************** CLASSES *****************************************
*/
class Contact
{
	private:

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

	public:
		
		bool		empty;
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickname(std::string nickname);
		void		setLogin(std::string login);
		void		setPost(std::string post);
		void		setEmail(std::string email);
		void		setPhone(std::string phone);
		void		setMeal(std::string meal);
		void		setColor(std::string color);
		void		setSecret(std::string secret);
		void		setBirthday(std::string birthday);
		bool		isEmptyContact();
		std::string	getBirthday(void);						
		std::string	getFirstName(void);		
		std::string	getLastName(void);	
		std::string	getNickname(void);
		std::string	getLogin(void);
		std::string	getPost(void);
		std::string	getEmail(void);
		std::string	getPhone(void);
		std::string	getMeal(void);
		std::string	getColor(void);
		std::string	getSecret(void);
};

class Book
{
	private:

		Contact		contacts[8];

	public:

		void		init(void);
		bool		isFull(void);
		bool		addContact(Contact contact);
		bool		displayAvailableContacts(void);
		void		searchContact(int id);
};

#endif
