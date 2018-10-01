#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <cstring>

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

		Contact 	contacts[8];

	public:

		void		initBook(void);
		bool		addContact(Contact contact);
		void		displayContacts(void);
		void		searchContact(Contact contact);
};

struct 
{
	
};

#endif
